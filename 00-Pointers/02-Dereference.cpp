#include<iostream>
using namespace std;
int main(){
    /*
        We can Access Value By Pointer or Address of that Variable, This Process
        is Called Dereference.
    */
    int i = 100;
    int *p1 = &i;
    cout << i << endl;                          // Access Value By Variable
    cout << *p1 << endl;                        // Access Value by Pointer

    /* 
    Because both i and p1 points to same Memory Address if You Change Value 
    Using Variable or Using Pointer Changes Will be Reflected in Both Statements 
    */

    i++;            // Update Value Via Variable 
    // Both Prints 101
    cout << i << endl;                          // Access Value By Variable
    cout << *p1 << endl;                        // Access Value by Pointer

    (*p1)--;        // Update Value Via Pointer
    // Both Prints 100
    cout << i << endl;                          // Access Value By Variable
    cout << *p1 << endl;                        // Access Value by Pointer


    int a = i;                                  // Stores via Varible
    a++;                
    // Changing Value in a is Not Affected on i Because a has Seprate Memory and i has seprate memory
    cout << a << endl;                  // Print 101
    cout << i << endl;                  // Print 100

    int b = *p1;                                // Stores Via Pointer with Dereference Concept
    b++;
    // Changing Value in b is Not Affected on i and *p1 Because b has Seprate Memory and i has seprate memory
    cout << b << endl;                  // Print 101
    cout << *p1 << endl;                // Print 100
}