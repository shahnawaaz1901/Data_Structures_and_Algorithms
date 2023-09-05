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

    /* 
        Like Other Data_Types Pointers Also Takes Space in Memory
        Generally Pointers Have 8Bytes Memory For All Kind of Variables
        Because Address of Any Kind of Variable is HexaDecimal So Require
        Storage is 8Bytes Generally Sometimes 4bytes in Some Machines Depends
        On Which Architecture machine Have
    */
}