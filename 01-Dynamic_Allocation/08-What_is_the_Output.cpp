/*
Dynamic memory allocation

In CPP, dynamic memory allocation is done using ______________ operator.

1. calloc()
2. malloc()
3. allocate
4. new                                      // *Correct
*/

/*
Deallocate memory

How will you free the memory allocated by following program -
#include <iostream>
using namespace std;    

int main() {
    int *a = new int;
}
1. free a;
2. delete *a;
3. delete a;                               // *Correct
4. new a;
*/

/*
Create array
Correct statement for creating an integer array of size 5, dynamically -

1. int *arr[] = new int[5];
2. int *arr = new int[5];                  // *Correct
3. int arr = new int[5];
4. int *arr[5] = new int;
*/

/*
Deallocate array

Correct statement for deallocating the array is -

1. delete [] arr;                         // *Correct
2. delete arr;
3. delete *arr;
4. delete [] *arr;
*/

/*
Delete memory

On deleting a dynamic memory, if the pointer value is not modified, 
then the pointer points to?

1. NULL                                                 
2. Other dynamically allocated memory
3. The same deleted memory location                         // *Correct
4. It points back to location it was initialized with
*/