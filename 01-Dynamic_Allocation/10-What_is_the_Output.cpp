/*
2D arrays

How to Dynamically create a Two Dimensional Array in C++?

1. int *twoDArray = new int[10][10];
2. int **twoDArray = new int*[10];                          //*Correct
3. int **twoDArray = new int[10][10];
*/

/*
Jagged arrays

Can we create Jagged Arrays in C++ ?

1. No
2. Yes                                                      //*Correct
*/

/*
Delete 2D array

Given the following CPP Program. Select the CORRECT Syntax of deleting 
this 2D array? Check all that apply.

#include <iostream>
using namespace std;
int main()
{
    int **twoDArray = new int*[10];
    for(int i = 0; i < 10; i++)
        *(twoDArray + i) = new int[10];
}

A.
delete twoDArray [][];

B.
for(int i = 0; i < 10; i++)
    delete twoDArray[i];
    delete twoDArray[];

C.
for(int i = 0; i < 10; i++)
    delete [] twoDArray[i];
    delete[] twoDArray;

D.
for(int i = 0; i < 10; i++)
    delete twoDArray[i][];
    delete[] twoDArray;


1. A
2. B
3. C                                   //*Correct
4. D
*/