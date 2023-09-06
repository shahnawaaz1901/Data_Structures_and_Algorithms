#include<iostream>
using namespace std;
int main(){
    int n = 100;
    int *ptr = &n;
    cout <<" Before Increment" << ptr << endl;
    ptr = ptr + 1;                  // You Can Do This
    cout <<" After Increment" << ptr << endl;
    /*
        If ptr Points Some 700 Memory Address in memory then after adding 1 it points 
        to 704 next 4 bytes because integer takes 4 bytes so that in 700 to 703 it's 
        reservse for current integer. Reserve Memory is depends on Data Type of Variable
        Which Data Type You Store in Pointer So that pointer read according to that
        in character it reads 1bytes, 4 for integer, 8 for double
    */
   /*
    For Example If n Memory Address is : 0x7fffd08562b4
    Then After Increment Memory Address is : 0x7fffd08562b8
   */

    // We Can Also substract to point previous memory in pointers
    ptr = ptr - 1;
    /*
    For Example If now ptr stores Memory Address of : 0x7fffd08562b8
    Then After Decrement Memory Address is : 0x7fffd08562b4
    */
    
    // Let's Try With Double
    double m = 100;
    double *pt = &m;
    cout <<" Before Increment " << pt << endl;
    pt = pt + 1;                  // You Can Do This
    cout <<" After Increment " << pt << endl;
    /*
        For Example If n Memory Address is : 0x7fffebf74dc0
        Then After Increment Memory Address is : 0x7fffebf74dc8         (8 bytes Increment)
   */

    pt = pt - 1;
    cout <<" After Decrement " << pt << endl;
    /*
        For Example If now ptr stores Memory Address of : 0x7fffebf74dc8
        Then After Decrement Memory Address is : 0x7fffebf74dc0         (8 Bytes Decrement)
    */

    // Increment & Decrement Makes Sence Only in Continous Memory Allocation Like Array
    
}