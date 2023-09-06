/*
What is the output

int a = 7;
int *c = &a;
c = c + 1;
cout  << a << "  " << *c << endl;

1. Garbage_value 7
2. 7 Garbage_value                          // Correct
3. 8 8
4. 7 7
*/

/*
Fill the output

Assume the memory address of variable ‘a’ is 400 (and an integer takes 4 bytes), 
what will be the output -

int a = 7;
int *c = &a;
c = c + 3;
cout<< c << endl;

Output : 412
Solution Description : c stores address of a (and points to value of a). 
                    address that c stores is incremented by 3. since c is of type int, 
                    increment in bytes is 3 integer addresses, that is 3*4 = 12 bytes. 
                    therefore 400 + 12 = 412
*/

/*
Fill the output

Assume memory address of variable ‘a’ is : 200 and a double variable is of size 8 bytes, 
what will be the output -

double a = 10.54;
double *d = &a;
d = d + 1;
cout  << d << endl;

Output : 208
*/