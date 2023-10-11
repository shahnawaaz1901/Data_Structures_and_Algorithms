#include<iostream>
using namespace std;
int main(){
    /* Dynamic Allocation of All data Types */
    /* 
        For Creating a Dynamically Allocated Variable We Need to Write
        new keyword before Data Type Because We Write New Keyword. Because
        Using new Keyword variable is allocated in heap memory and in heap
        memory we don't have option to store it on variable for that we did
        not have any option to access or modify the variable.That's Why We
        Create a Pointer Statically and keeps address of dynamically allocated
        variable in that pointer. So that Pointer is Allocated statically 
        but in Pointer address of Dyanamically Variable is Stored
    */
    int *a = new int;
    *a = 5;
    
    char *b = new char;
    *b = 'a';
    
    double *c = new double;
    *c = 2.56;

    bool *d = new bool;
    *d = true;

    /*
        Statically Allocated Variable Space is Remove After the Scope is
        Over. But in Dynamically Memory Allocation Pointer is Created 
        statically but pointer stores address of variable which allocated
        by dynamically so pointer is deleted after scope of that pointer
        over but dynamically allocated variable actual memory not deleted
        so we need to delete that memory 'EXPLICITLY' by writing delete 
        keyword.
    */
    delete a;
    delete b;
    delete c;
    delete d;
    
}