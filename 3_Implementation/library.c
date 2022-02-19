// This project is an small idea which helps the librarian in fetching data.
// It also helps in adding data to the books available in the library.
// This program gives the details about the Books present in the library.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 // we use three functions char, int and float. 
 // Book name, author, number of pages, price are the four inputs

struct library {
    char book_name[20];
    char author[20];
    int pages;
    float price;
};
 
 // I have included the while function for 5 
 // An welcome note to greet the user
 // adding book informations 

int main()
{
   
    struct library lib[100];
 
    char ar_nm[30], bk_nm[30];
 
        int i, input, count;
 
    i = input = count = 0;
 
        while (input != 5) {
 
        printf("\n\n********######"
               "WELCOME TO E-LIBRARY "
               "#####********\n");
        printf("\n\n1. Add book infor"
               "mation\n2. Display "
               "book information\n");
        printf("3. Exit");
 
       
        printf("\n\nEnter one of "
               "the above: ");
        scanf("%d", &input);
 
       // using switch function to transfer the inputs to the case 1
        switch (input) {
 
       
