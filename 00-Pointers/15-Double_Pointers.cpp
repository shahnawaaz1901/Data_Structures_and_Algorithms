#include<iostream>
using namespace std;
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

}