#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4};
    char c[] = "Ashu";
    cout << a << endl;          // Print address of a 
    cout << c << endl;          // Print content of c

    char *ch = &c[1];           // Stores first Index Address of Character Array
    cout << ch << endl;         // Print from first index to null character

    char *ch = &c[0];           // Stores Zero Index Address of Character Array
    cout << ch << endl;         // Print from first index to null character

    char x = 'a';
    char *x1 = &x;
    cout << x1 << endl;         // Print Guarbage until Found Null Character
}

