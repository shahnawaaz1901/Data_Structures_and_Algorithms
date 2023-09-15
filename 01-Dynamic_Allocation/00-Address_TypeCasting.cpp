/*
    Define DataType in Pointer is So Important Because if We Dereffer and Access Value through
    Pointer then compiler wants to know how much bytes it read when compiler access the value
    So that's Why pointer require to know data type
*/

#include<iostream>
using namespace std;
int main(){
    /* Implicit TypeCasting */
    int i = 65;
    char c = i;
    cout << c << endl;

    /* Explicit TypeCasting */

    int *p = &i;
    char *ch = (char*)p;                // Explicitly Tell Compiler To TypeCast
    cout << *ch << endl;                // Print 'A'
    
    // As We Know Integer have 4bytes and Our Integer Stores from end to start but

    cout << *(ch + 1) << endl;          // Print Guarbage
    cout << *(ch + 2) << endl;          // Print Guarbage
    cout << *(ch + 3) << endl;          // Print Guarbage

    /*
        From Above Example We get that Our Integer Not Stored from end to Start it stored
        in start to end form This is Done Because Two Type of System Exist :
        1. Lower Endian System : Store Integer from End to Start
        2. Big Endian System : Store Integer from Start to End
    */


    /* 
        As We Know If We Prints Character Pointer then compiler prints Actual 
        Content Instead of Address
    */

   cout << ch << endl;
   /*   Above Statement Read all 4 bytes but our content is only available at first byte so 
        after first byte Guarbage is Printed
   */

}