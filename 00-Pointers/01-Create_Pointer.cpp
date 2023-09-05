#include<iostream>
using namespace std;
int main(){
    /*
        Pointers : Pointers Helps us to Store Address of Any Kind of DataType Variable.
        Syntax :
        data_type * pointer_name = &"variable_name"
        Variable Name Not Require any Kind of Parenthesis
    */

    int i = 10;
    // Create Pointer
    int *pointer1 = &i;
    // Because Pointer Stores Variable Address So that Both Statements Print Same Address
    cout << &i << endl;
    cout << pointer1 << endl;
}