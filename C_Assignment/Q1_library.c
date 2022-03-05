/*
Write a menu driven program that depicts the working of a library. The menu
options should be:

1. Add book information
2. Display book information
3. List all books of given author
4. List the title of specified book
5. List the count of books in the library
6. List the books in the order of accession number
7. Exit

Create a structure called library to hold accession number, title of the book, author
name, price of the book, and flag indicating whether the book is issued or not.
*/

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct library {                //Structure with library name

    int access_num;             //Accession Number
    char title[100];            //Title of the book
    char author[100];           //Author of the book
    int price;                  //Price of the book
    int book_flag;              //This book_flag checks that wheather book is issued ot not.
    
}my_library[100];               //declarization of structure

void sort_in_order_of_access_num(struct library [], int);               //Function prototype

int main()
{
    int x, y;
    int index = -1;
    int choice = -1;
    int total_books = 0;
    int access_num_dis;
    char author_A[50];
    char title_A[50];
    
    
    while(1) {
        
        //Displaying the main menu to perform operations.
        
        printf("\n1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n");
        printf("Enter your choice: \n");
    
        scanf("%d", &choice);
    
                if(choice == 1) {               //Adding book information.
                    printf("Enter the accession number of the book: ");
                    scanf("%d", &my_library[total_books].access_num);
                    
                    printf("Enter the Book Title: ");
                    //scanf("%*s%s", my_library[total_books].title);                //If the title name of the book is in one or more sentence with space use this. For example:- One word
                    scanf("%s", my_library[total_books].title);                 //If the title name of the book is in one sentence without space use this. For example:- Caraval
                    
                    printf("Enter the Author of the book: ");                   
                    //scanf("%*s%s", my_library[total_books].author);               //If the Author name of the book is in one one sentence without space use this. For example:- J KMilkman
                    scanf("%s", my_library[total_books].author);                //If the Author name of the book is in one one sentence without space use this. For example:- Milkman
                
                    printf("Enter the price of the book: ");
                    scanf("%d", &my_library[total_books].price);
                    
                    
                    my_library[total_books].book_flag = -1;
                    
                    while(my_library[total_books].book_flag != 1 && my_library[total_books].book_flag != 0) {
                        printf("Book is issued or not?\nAnswer with Yes-1 or No-0\n");
                        scanf("%d", &my_library[total_books].book_flag);
                    }
                   total_books++;
                    printf("\n\nCongratulation!!! Your Books is added succefully!!!\n\n");
                    
                }
                
                else if(choice == 2) {              //Displaying book information
                    if(total_books == 0) {
                        printf("\nThe library is empty!!!\n");
                    }
                    else
                    {
                        index = -1;
                        printf("To display the book information.\nEnter the book accession number:");
                        scanf("%d",&access_num_dis);
                        for(int i = 0; i<total_books; i++) {
                            if(my_library[i].access_num == access_num_dis) {
                                index = i;
                            }
                        }
                        if(index != -1) {
                            printf("\n%-20s%-20s%-20s%-20s%-20s\n","Accession Number","Book title","Book Author","Book Price","Book is issued");
                            printf("%-20d%-20s%-20s%-20d%-20d\n\n",my_library[index].access_num, my_library[index].title, my_library[index].author, my_library[index].price, my_library[index].book_flag);  
                        }
                        else 
                        {
                            printf("Sorry! This book doesnot exist.\nPlease try again.\n");
                        }
                    }
                }
                else if(choice == 3) {              //Listing all books with author name
                    if(total_books == 0) {
                        printf("\nThe library is empty!!!\n");
                    }
                    else 
                    {
                        printf("Enter the books author to the list: ");
                        scanf("%s", author_A);
                        index = -1;
                        
                        printf("\n\n%-20s%-20s%-20s%-20s%-20s\n", "Accession Number","Book title","Book Author","Book Price","Book is issued");
                        for(int i = 0; i < total_books; i++) {
                            if(strcmp(my_library[i].author, author_A) == 0){
                                index = i;
                            
                            printf("%-20d%-20s%-20s%-20d%-20d\n\n",my_library[index].access_num, my_library[index].title, my_library[index].author,my_library[index].price, my_library[index].book_flag);
                            }
                        }
                        if(index == -1){
                            printf("Sorry! This book doesnot exist.\nPlease try again.\n");
                        }
                    }
                }
                else if(choice == 4){               //Listing all books with the tilte name.
                    if(total_books == 0) {
                        printf("\nThe library is empty!!!\n");
                    }
                    else 
                    {
                        printf("Enter the book title to list: ");
                        scanf("%s", title_A);
                        
                        index = -1;
                        printf("\n\n%-20s%-20s%-20s%-20s%-20s\n", "Accession Number","Book title","Book Author","Book Price","Book is issued");
                        
                        for(int i = 0; i < total_books; i++) {
                            if(strcmp(my_library[i].title, title_A) == 0) 
                            {
                                index = i;
                                printf("%-20d%-20s%-20s%-20d%-20d\n\n", my_library[index].access_num, my_library[index].title, my_library[index].author, my_library[index].price, my_library[index].book_flag);
                                
                            }
                        }
                        if(index == -1) {
                            printf("Sorry! This book doesnot exist.\nPlease try again.\n");
                        }
                    }
                        
                }
                else if(choice == 5){               //Counting the books in library
                    if(total_books == 0) {
                        printf("\nThe library is empty!!!\n");
                    }
                    else
                    {
                    printf("The total number of books in the library: %d\n\n",total_books);
                    }
                }
                else if(choice == 6){               //Listing the books in order of accession number
                    if(total_books == 0) {
                        printf("\nThe library is empty!!!\n");
                    }
                    else 
                    {
                        sort_in_order_of_access_num(my_library, total_books);               //function call
                        printf("\n\n%-20s%-20s%-20s%-20s%-20s\n", "Accession Number","Book title","Book Author","Book Price","Book is issued");
                        
                        for(int i = 0; i < total_books; i++){
                        printf("%-20d%-20s%-20s%-20d%-20d\n\n", my_library[i].access_num, my_library[i].title, my_library[i].author, my_library[i].price, my_library[i].book_flag);
                        }
                    }
                }
                else if(choice == 7) {              //Exit 
                    break;
                }
                else if (choice != 1 || choice != 2 || choice != 3 || choice != 4 || choice != 5 || choice != 6 || choice != 7)
	            {
	            printf("Invalid Input, Please try again with valid input!!!\n\n");
	            }
    }
    

    return 0;
}

void sort_in_order_of_access_num(struct library my_library[], int size){                //fucntion defination
    int index_min;
    struct library temp;
    
    for(int i = 0; i < size; i++){
        index_min = i;
        for(int j = i + 1; j < size; j++){
            if(my_library[j].access_num < my_library[index_min].access_num)
            index_min = j;
            temp = my_library[i];
            my_library[i] = my_library[index_min];
            my_library[index_min] = temp;
        }
    }
}

