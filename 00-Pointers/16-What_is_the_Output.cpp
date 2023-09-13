/*
What will be the output ?

int a = 10;
int *p = &a;
int **q = &p;
int b = 20;
*q = &b;
(*p)++;
cout << a << " " << b << endl;

1. 10 21                                    // Correct
2. 11 20
3. 11 21
4. 10 20
Solution Description : p points to a. q points to p directly and a through p (double pointer). 
                    *q — value stored in p is changed to address of b instead of that of a. 
                    (*p)++ — value that p points to, which now is of b, is incremented by 1 
                    (b becomes 21). Value of a remains unchanged.
*/


/*
What will be the output ?

int a = 100;
int *p = &a;
int **q = &p;
int b = (**q)++ + 4;
cout << a << " " << b << endl;      

1. 100 104
2. 101 104                                  // Correct
3. 101 105
4. 100 105
Solution Description :
1. int a = 100; sets the value of a to be 100.

2. int *p = &a; creates a pointer p pointing to the address of a.

3. int **q = &p; creates a pointer-to-pointer q pointing to the address of p.

4. int b = (**q)++ + 4; dereferences q twice to get the value of a (100), increments it by 1, 
    and adds 4, resulting in 104. The value of a becomes 101.

5. cout << a << " " << b << endl; prints the values of a and b, which are 101 and 104, 
    respectively.
*/

/*
What will be the output ?

int a = 100;
int *p = &a;
int **q = &p;
int b = (**q)++;
int *r = *q;
(*r)++;
cout << a << " " << b << endl;

1. 102 100                                      // Correct
2. 101 100
3. 101 101
4. 102 101

Solution Description :
1. int a = 100; sets the value of a to 100.


2. int *p = &a; sets the pointer p to the address of a.


3. int **q = &p; sets pointer q to address of p.


4. int b = (**q)++; Firstly assign the value pointed by **q to b and then increment the value 
    at location **q(a).


5. int *r = *q; sets the pointer r to the address of a (pointed by *q).
*/

/*
What will be the output ?

void increment(int **p){
  (**p)++;
}

int main(){
 int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
}
1. 10
2. 11                               // Correct
3. Error
4. None of these
Solution Description :
1. 'num' is initialized with the value 10.

2. 'ptr' is a pointer that stores the address of 'num'.

3. 'increment' function takes a double pointer as an argument, so '&ptr' is passed.

4. Inside the 'increment' function, '**p' refers to the value of 'num', which is incremented by 1.

5. After the function call, the value of 'num' becomes 11.

*/