/*
In-place merge two sorted arrays.
Given two sorted arrays, X[ ] and Y[ ] of size m and n each, merge elements of X[ ] with elements of array Y[ ] by maintaining the sorted order, i.e., fill X[ ] with the first m smallest elements and fill Y[ ] with remaining elements.
For example,
Input:
 
X[] = { 1, 4, 7, 8, 10 }
Y[] = { 2, 3, 9 }
 
Output:
X[] = { 1, 2, 3, 4, 7 }
Y[] = { 8, 9, 10 }
*/
#include <iostream>

using namespace std;

void merge_elements(int [], int [], int , int );                //function prototype 
void display_array(int [], int );                   //function prototype

int main()
{
    int X[] = { 1, 4, 7, 8, 10 };
    int Y[] = { 2, 3, 9 };
    
    int m = sizeof(X)/sizeof(X[0]);
    int n = sizeof(Y)/sizeof(Y[0]);
    
    merge_elements(X, Y, m, n);             //function call
    cout << "X: ";
    display_array(X,m);                 //function call
    cout << "Y: ";
    display_array(Y,n);
    
    
    
    return 0;
}

void merge_elements(int X[], int Y[], int m, int n) {               //function defination
    
    for(int i = 0; i < m; i++){
        if(X[i] > Y[0]) {               
            swap(X[i], Y[0]);
            int head = Y[0];
            
            int k;
            for(k = 1; k < n && Y[k] < head; k++) {
                Y[k-1] = Y[k];
            }
            Y[k-1] = head;
        }
    }
}

void display_array(int a[], int n) {                    //function defination
    for(int i = 0; i < n; i++) {
        cout << a[i] <<" ";
    }
    cout <<"\n" << endl;
    
}
    
