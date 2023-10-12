#include<iostream>
using namespace std;
int main(){
    /*
        With Dynamic Memory Allocation We Can Create an Array of any size 
        at Runtime Because Dynamically Create Array Store in Heap Memory 
        Not in Stack Because Heap Memory is Huge Compare to Stack So we Can 
        Create the Array at Runtime Due to Low Memory Size We Can't Create 
        the Array Statically at the Runtime and We Can Create a Pointer to 
        Point that Array in which is in heap memory.
    */

    /* 
    *Syntax For Statically Allocate 1-D Array
    ? data_type array_name[size of Array in Integerform Not in Variable]
    */
    int a[10];
    char b[10];
    double c[10];

    /* 
    *Syntax For Dynamically Allocate 1-D Array
    ? data_type * pointer_name = new data_type[size of Array in integer of variable both allowed]
    here * denotes that this is a pointer which point to array zero index
    */
    int n;
    cin >> n;
    int *d = new int[n];
    char *e = new char[n];
    double *f = new double[n];

    /*
        How Ever We Can Access Both Dynamically Allocated and 
        Statically Allocated Array By using same Syntax
        Array_name[index_of_array]
    */

    for(int i = 0; i < 10;i++){
        cout << a[i] << " ";            // *Access Statically Allocate Array
    }
    for(int i = 0; i < n;i++){
        cout << d[i] << " ";             // *Access Dynamically Allocate Array
    }

    /*
        *Because Array is Created Dynamically We Need to Delete the
        *Array Explicitly. When We Write the delete before any pointer
        *pointer not deleted memory which pointer points is deleted 
        *pointer is deleted after the scope of the pointe is Over
    */

    delete []d;             // *delete where d Points
    delete []e;             // *delete where e Points
    delete []f;             // *delete where f Points
}