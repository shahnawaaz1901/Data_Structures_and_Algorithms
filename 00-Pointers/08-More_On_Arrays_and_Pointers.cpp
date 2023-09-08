#include<iostream>
using namespace std;
int main(){
    int a[10];

    // Both Print Same Because a does'nt have any seprated memory for stores
    cout << a << endl;
    cout << &a << endl;

    // we Can't assign address of pointer to a
    int *ptr = a;               // We Can Do this Because a represent zeroth index address of array
    // a = ptr;                    
    /*
        We Can't do this because a does'nt have any seprate memory and on 
        integer array we can't Store Pointers 
    */
   cout << ptr << endl;         // Print address of a
   cout << &ptr << endl;        // Print Address of ptr because ptr have seprate memory


   ptr = ptr + 1;               // you can do this
//    a = a + 1;                   // you can't do this because doesn't have any seprate memory

}