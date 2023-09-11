#include<iostream>
using namespace std;
/* 
    When Ever We Pass array in Function Whole Array is Not Passed 
    Pointer of array is Passed that's why if we change something in array
    in the function then changes will be reflected in our main function
    That's why if we check size of array in function then it gives us 8byte 
    because pointer takes 8bytes
*/
// int sum(int a[], int size){         // We Can Write this
int sum(int *a, int size){              // We Can do this 
    int sum = 0;
    for(int i = 0; i < size;i++){
        sum += a[i];
    }
    return sum;
}
int main(){
    int a[10];
    for(int i = 0; i < 10;i++){
        cin >> a[i];
    }
    /* 
    Because Not Array is Passed Only Pointer is Passed then we can 
    apply arithmetic operations as well in this 
    */
    cout << sum(a, 10) << endl;         // This Send the Pointer of 0th index of Array

    // We Can Also do this
    cout << sum(a + 4, 6);              // This sends pointer of 4th index so we get sum of 4 to 10 elements
}