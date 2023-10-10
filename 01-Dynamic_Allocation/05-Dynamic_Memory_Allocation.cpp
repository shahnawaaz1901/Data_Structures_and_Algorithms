#include<iostream>
using namespace std;
int main(){
    /*
        Two Types of Allocation Exist :-
        1. Statically Allocation
        2. Dynamic Allocation
    */ 
    
    // Statically Allocation
    int i = 20;
    char ch = 'd';
    double f = 4.56;

    // Dynamically Allocation
    int * c = new int;
    *c = 5;
    cout << c << *c << endl;
    /*
        Two Types of Memmory Exist stack and Heap. Veriable which Are Declared
        Statically is Create on Stack Memory and Variable which are Declared 
        through Dynamically is Created on Heap Memory. Heap Memory is Greater
        then Stack.
    */
}