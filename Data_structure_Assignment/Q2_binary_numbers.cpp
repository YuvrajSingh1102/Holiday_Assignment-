/*
Generate binary numbers between 1 to `n` using a queue.
Given a positive number n, efficiently generate binary numbers between 1 and n using the queue data structure in linear time.

For example, for n = 16, the binary numbers are:
Input :
1 10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110 1111 10000

Output:
1 10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110 1111 10000
*/

#include <stdio.h>

void binary_number(int);                //function prototype
void enQueue(int, int *, int *, int [], int);               //function prototype
void deQueue(int *,int *,int [],int);               //function prototype

int main() {
	  int n;
	  
	printf("Enter the n value upto which you want binary numbers: ");
	scanf("%d",&n);
	  
	int SIZE = n;
	int arr[SIZE], head = -1, rear = -1;
	
	for(int i=1; i<=SIZE; i++){
	    enQueue(i,&rear,&head,arr,SIZE);
	}

	for(int i=1; i<=SIZE; i++){
	    deQueue(&rear,&head,arr,SIZE);
  	}

  	return 0;
}

void binary_number(int b)               //function defination
{
	    int k[100];
	    int i = 0;
	    
	    while(b>0){
		k[i]= b%2;
		b= b/2;
		i++;
	    }
	    for (int j = i - 1; j >= 0; j--){
		printf("%d",k[j]);
	    }
	    
	    printf(" ");
}

void enQueue(int value,int *rear,int *head,int arr[],int SIZE)                  //function defination
{
	  if (*rear == SIZE - 1)
	    printf("\nQueue is Full!!");
	  else {
	    if (*head == -1)
	      *head = *head+ 1;
	    *rear = *rear+1;
	    arr[*rear] = value;
	  }
}
void deQueue(int *rear,int *head,int arr[],int SIZE)                    //function defination
{
	  if (*head == -1)
	    printf("\nQueue is Empty!!");
	  else {
	    binary_number(arr[*head]);
	    *head = *head + 1;
	    if (*head > *rear)
	      *head = *rear = -1;
	  }
}

