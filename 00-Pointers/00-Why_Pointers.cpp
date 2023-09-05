#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    /*
        When Ever We Create a Variable in Any Language System Follows Three Steps For that :
        1. Allocate Memory for that Variable(Allocate Size According to Data Type)
        2. Add an Entry for that Variable Corresponding to allocated Memory Address in
            Symbol Table
        3. Fill that Memory Address with the value of Variable.
    */

    /*
    Symbol Table : A table where Variable and it's Corresponding Memory Address is Stored
                 is Called Symbol Table
    */
    /*
    For fetching Memory of a Perticular Variable Address Use '&' Before
    Variable Name to Fetch Address
    */

    cout << &i << endl; // Prints Address of i in HexaDecimal Form

    /*Pointer Helps Us to Keep Memory Address of Any Variable*/
}