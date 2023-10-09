#include<iostream>
using namespace std;
int main(){
    int i = 10;
    int j = i;
    i++;
    cout << j << endl;          // j Remains Same
    /*
        If we Want that Memory Which i Used to Store 10 another variable
        Point to that same Memory so that if we change something in i then
        in other variable changes is reflected then we can do this by writing
        '&' which means reference variable.
        If we Write '&' before new variable name then it means new variable
        also point to memory which i points. in this case no new memory is
        alloted to new variable memory which i used uses by new variable
    */
    int k = 30;
    int &l = k;
    /* 
        if we Change Something in k then changes reflected in l because both points
        same memory address this condition also apply on l changes also reflected in k
    */
    k++;
    cout << l << endl;                  // Print 31
    /*
        Reference Variable Needs to Initialize at the Time of Declaration
        --We Can't do this--
        int &p;
        p = k;
    */
    
}