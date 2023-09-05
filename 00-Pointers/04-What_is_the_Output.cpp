/*
Pointer Declaration

Which of the following is the proper declaration of a pointer?

1. int x;
2. int &x;
3. int *x;                  // Correct
4. ptr x;

Solution Description
1. [int x] is a declaration of a regular integer variable, not a pointer.


2. [int &x] is a declaration of a reference to an integer, not a pointer.


3. [int *x] is the correct syntax for declaring a pointer to an integer.


4. [ptr x;] is not a valid syntax in C++.

*/

/*
Address of Variable

Which of the following gives the memory address of integer variable a ?

1. *a;
2. a;                   
3. &a;                      // Correct
4. address(a);

Solution Description :

1. *a is used to dereference a pointer, not to get the address of a variable.

2. a is the value of the variable itself.

3. &a is the correct way to get the memory address of a variable in C++.

4. address(a) is not a valid syntax in C++.

*/

/*
Address of variable

Which of the following gives the memory address of variable 'b' 
pointed by pointer 'a' i.e.

int b = 10;
int *a = &b;

1. a                            // Correct
2. *a
3. &a
4. address(a)

Solution Description :

1. 'b' is an integer variable with value 10.

2. 'a' is a pointer to an integer, and it stores the memory address of 'b' using the '&' operator.

3. 'a' itself holds the memory address of 'b', so the correct option is 'a'.
*/

/*
Pointers Output

What will happen in this code?

int a = 100, b = 200;
int *p = &a, *q = &b;
p = q;

1. b is assigned to a
2. p now points to b                    // Correct
3. a is assigned to b
4. q now points to a

Solution Description :
int *p = &a, *q = &b; creates two pointers p and q, pointing to the addresses 
of a and b respectively.

p = q; assigns the address stored in q (address of b) to p, so now p points to b.

So, the output for this is " p points to b".

*/

/*
What will be the output ?

int a = 7;
int b = 17;
int *c = &b;
*c = 7;
cout  << a << "  “ << b << endl;

1. 7 17
2. 17 7
3. 7 7                              // Correct
4. 17 17

*/

/*
What will be the output ?

int a = 50;
int *ptr = &a;
int *q = ptr;
(*q)++;
cout << a  << endl;

1. 50
2. 51                               // Correct
3. Error
4. None of these

Solution Description :
1. int *ptr = &a; creates a pointer 'ptr' that stores the address of 'a'.


2. int *q = ptr; creates another pointer 'q' that stores the address of 'a' as well.


3. (*q)++; increments the value of the variable pointed by 'q' (which is 'a') by 1.


So, the output for this is 51.

*/

/*
What will be the output ?

int a = 50;
int *ptr = &a;
cout << (*ptr)++ << “ “;
cout << a << endl;

1. 50 51                    // Correct
2. 51 50
3. 51 51
4. 50 50

Solution Description :
1. int *ptr = &a; creates a pointer 'ptr' pointing to the address of 'a'.


2. cout << (*ptr)++ << " "; prints the value of 'a' (50) and then increments it by 1.


3. cout << a << endl; prints the updated value of 'a' (51) on a new line.
*/

/*
What will be the output ?

int *ptr = 0;
int a = 10;
*ptr = a;
cout << *ptr << endl;                       

1. 10
2. 0
3. Error                // Correct Because ptr points to NULL memory and we update null memory value with 10

*/

/*
Pointers Output

What will be the output?

int a = 7;
int b = 17;
int *c = &b;
*c = 7;
cout  << a << "  “ << b << endl;

1. 18 18
2. 7 18
3. 17 7
4. 7 7                              // Correct
*/

/*
Pointers Output

What will be the output ?

float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr << “ “ << f << “ “ << p;

1. 2.5 10.5 2.5
2. 2.5 11.5 2.5                     
3. 2.5 2.5 2.5                          // Correct
4. 11. 11.5 2.5

Solution Description : ptr points to f. f is incremented by 1 
                through ptr (f = 11.5 now). f = p using ptr (f = 2.5 now).

*/