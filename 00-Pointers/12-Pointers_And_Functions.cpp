// In this session we are going to see how function and pointers works
#include<iostream>
using namespace std;
void print(int *p){
    // Print value of pointer
    cout << *p << endl;
}

// Increment of Pointer
void incrementPointer(int *p){         // Pass Pointer or Address of p
    p = p + 1;                  
}


// Increment of Pointer Value
void increment(int *p){
    *p++;
}
int main(){
    int i = 10;
    int *p = &i;
    print(p);                       // Print Before Increment
    incrementPointer(p);           // Pass Pointer by Value
    print(p);                      // Print After Increment

    // Changes Not Refelected Because pointer is passed by Value
    print(p);
    increment(p);                   // Increment Value
    print(p);

    /* 
    if We Change Value through Pointers in function then 
    changes would be reflected in our main function
    */
}
