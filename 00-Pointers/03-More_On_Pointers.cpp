#include<iostream>
using namespace std;
int main(){
    int i = 100;            // Create Variable
    int *p1 = &i;           // Create One Pointer Points to i
    // p2 is another pointer which points where p1 points to so that now p2 is also point same memory address which i has
    // So all three i, p1, p2 is point to same memory Address
    int *p2 = p1;           // Create Another Points to i

    cout << i << endl;
    cout << *p1 << endl;
    cout << *p2 << endl;

    // Due to Points Same Memory Address if We Change Something in One Changes Reflect in All
    (*p2)++;
    cout << i << endl;
    cout << *p1 << endl;
    cout << *p2 << endl;

    // When We Not Assign Any Value in a Variable then Compiler put guarbage in that variable
    int a;
    cout << a << endl;
    a++;                        // Increment of Guarbage
    cout << a << endl;

    // This is Legal and ok with normal Variable But this is Not ok or Bad Practice in Pointers
    int *c;                     // Bad Practice
    /*
        Because Pointer Points to some Memory Address. In this case compiler assign some
        guarbage address on c, this guarbage address is anything, this guarbage address
        can be possibly other Programs Address or other internal file Address or some other
        type of address which is only read only files, So in this Case it's highly Chance
        that our program is points some internal or system file. We Should always prevent
        this type of Situation , Because if c points some internal file and we do this
        (*c)++ or (*c) = 100; 
        this possibly crash some files of Our System Because We Points a memory which 
        we not have access, For Preventing this type of Situation we if We Not give any
        address at the time of declaration then we need to point our pointer where this
        type of situation not occures and compiler tells us that hey this is not your
        memory because you not gives any kind of address at the time of declaration
    */

    // We Can Do this
    int *d = 0;                         // We Tell d to point null Pointer Means Not Point to Anything
    // Or We Can Do this
    int *e = NULL;
    // Both Means is Same

}