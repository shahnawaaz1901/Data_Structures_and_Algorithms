#include<iostream>
using namespace std;
int main(){
    /*
        *For Creating 2D Arrays Dynamically We didn't have any Syntax to Create
        *But We Can Create 2D Array By Creating an Array of Pointers
        *That Pointers Points to Another Array (Can be Different Sizes of Each Array)
        *Array Which We Create To Store Pointers of Other Array, that Array Size
        *is the Number of Rows of 2D Arrays
        *Number of Columns is Differ Because Each Array has Power to Choose Size
        *IrRespective of Other Array Size.
    */

    int n;          // For Rows
    cin >> n;
    int m;
    cin >> m;       // For Columns
    int* *arr = new int*[n];
    /*Here int* is the DataType Because We Stores integer Pointer that's why int* Data Type*/
    for(int i = 0; i < n;i++){
        arr[i] = new int[m];        // Create Independent Array for Integer Pointer Array
    }

    /* With Dynamic Memory Allocation We Can Create Zig Zag Like 2D Array */
    //*Take Input in Array
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> arr[i][j];
        }
    }

    //*DeAllocate 2D Array Because Dynamically Created
    for(int i = 0; i < n;i++){
        delete []arr[i];
    }
    delete []arr;
}