#include<iostream>
using namespace std;

void increment1(int **p){
    p = p + 1;                      // Changes Not Reflected in our main Function
}


void increment2(int **p){
    *p = *p + 1;                    // Changes Reflected in Our Main Function Because Changes is done Through Dereffer so that's why changes is reflected
}

void increment2(int **p){
    **p = **p + 1;                  // Changes Reflected in Our main Function Because Changes is Done Through Double dereffer
}


int main(){
    int i = 10;
    // We We Write this
    int *p = &i;            
    /*
        Because if We dereffer the p then compiler needs how many bytes
        want to read, so that's why we specific require what data type 
        pointer stores and how many bytes compiler require to read that 
        data
    */ 

    /*
        Double Pointers : Double Pointers is the Pointers which are Stores
            Address of Other Pointers.
        Syntax of Double Pointers Remains Same as normal Pointers
        Data_Type * pointer_name = address of Pointer
    */

    // Let's take an Example :
    int x = 100;
    int *y = &x;
    int **z = &y;       
    /*  Because z stores int* pointer address so data type
        for double pointer is Data_type * because * represents 
        that data would be integer pointer
    */

    // Both Prints Same Statement Address of y Because z is a Double Pointer Stores Address of y
    cout << z << endl;
    cout << &y << endl;


    cout << *z << endl;         // Prints Value which y contains here y contains address of x
    cout << *y << endl;         // prints Value which x contains here x contains value of 100
    /*
        This double dereference :
        prints Value which x Contains because first dereffer goes for value of y which is 
        address of x and second time dereffer goes for that address of x and prints value 
        of that address.
    */
    cout << **z << endl;        
}