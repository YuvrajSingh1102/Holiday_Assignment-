/*
Search and Sequence
Consider an integer array ‘a’ of size 10, where the value of the array elements are
{1,5,4,8,9,2,0,6,11,7}. Write a program to
▪ Find whether the given element exists in an array or not. If the element exists in an
array, display YES else NO.
▪ To print a number following a sequence of elements in an array i.e., 15489206117.
*/

#include <stdio.h>

int main() {
    char a[] = {1,5,4,8,9,2,0,6,11,7};              //array declaration
    int choice, element;
    
    printf("Select the operation you want to perform in array:-\n");                //Printing menu for performing operation
    printf("1. Search a number in array\n");
    printf("2. Print the array in sequence\n");

    scanf("%d", &choice);               //taking input from user
   
    switch(choice) {
        
        case 1:
        printf("\nEnter the number you want to search in array: ");
        scanf("%d", &element);
        
        int flag = 0;
        for(int i = 0; i < 10; i++) {
            if(a[i] == element) {
                flag = 1;
            }
            
        }
        if(flag == 1) {
                printf("Yes\n");
            } 
            else
            {
                printf("No\n");
            }
        break;
        
        case 2:
        printf("The sequence of the array elements are:\n");
        
        for(int i = 0; i < 10; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
        break;
    
    }
    return 0;
}
