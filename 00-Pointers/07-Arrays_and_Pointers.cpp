#include<iostream>
using namespace std;
int main(){
    int a[10];
    // If We Check address of a then it gives us 0th index address of
    cout << a << endl;
    cout << &a[0] << endl;
    /* Both Are Eqaul Because Both Points Same Memory Address */

    /* 
        For this Relation if we change index of 0 value in array and print 
        through pointer then changes would be reflected into it
    */
   a[0] = 5;
   cout << *a << endl;
   //Because address of a is point to zero index then *a print 0 index value of a which is 5

    /* 
        We Learn in Arithmetic Operation of Pointers if we Increment or 
        Decrement pointers then it adds data_type storage or minus data type 
        storage and point to it.
        Lets Example if start index of an integer array is 700 then array + 1
        prints 704 because integer have 4 bytes so 700 + 4 print 704. This technique
        is Basically Works in Array
    */
    a[1] = 100;
    cout << a + 1 << endl;          // Print a[1] address
    cout << *(a + 1) << endl;       // Print a[1] Value

    /*
        Internally System do Same thing For us when Ever we Write a[i]
        system internally gives us *(a + i) that's why index of arrays
        start from zero, because first Element address is address of 
        whole array then system will do *(a + 0) for us which means *(a)
    */

    //With Above Reason we can do this
    for(int i = 0; i < 10;i++){
        /* 
            Because Internally Same Addition process is done but in this case
            in i address of a is added which gives us same result because
            *(a + i) == *(i + a) in addition operands position not metters
        */
        cout << i[a] << " ";                
    }

    /* Difference Between Pointers and Arrays */
    /* 
        In Symbol Table which Every Size we Want that size Multiply by data type 
        and total size is store in symbol table, for eg. if we write int a[10] then
        in symbol table 10 * 4 = 40 size is store for array, But in pointers only 8
        bytes is allocates.
    */
    /*
        In Array if We Write int a[10] then it creates array for us which size is 40bytes
        and a is points to zero'th index of array and value of a is zero'th index address
        because internally system not allocated any memory for a, But in case of Pointers
        if We Write int *ptr = &a[0] then first 8 byte is allocated for pointer variable
        then in that memory a[0] address is stored but in case of array no memory is 
        allocated for variable

        So if we print a and if we print &a both are same because a does'nt have any memory
        it points zeroth index of array, So
        
        // Both are Same
        cout << a << endl;              
        cout << &a << endl;

        //But in Pointer both are different
        cout << ptr << endl;            //print Value of ptr which is address of a
        cout << &ptr << endl;           //print address or ptr which is differently allocate
    */
}