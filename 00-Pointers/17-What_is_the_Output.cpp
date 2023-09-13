/*
Find the output :

#include <iostream>
using namespace std;
int main()
{
  int arr[] = {4, 5, 6, 7};
  int *p = (arr + 1);
  cout << *arr + 9;
  return 0;
}

1. 12
2. 14
3. 13               // Correct, Because first Dereffer the Zeroth Index Address and then add 9
4. error                    
*/

/*
Pointers Output

#include <iostream>
using namespace std;
int main ()
{
  int numbers[5];
  int * p;
  p = numbers; 
  *p = 10;
  p = &numbers[2]; 
  *p = 20;
  p--; 
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p+4) = 50;
  for (int n=0; n<5; n++) {
     cout << numbers[n] << ",";
  }
  return 0;
}

1. 10,20,30,40,50,
2. 50,40,30,20,10,
3. 10,30,20,40,50,                          // Correct
4. None of these

Solution Description :
1. p is assigned to the address of the first element of the array, and *p = 10 sets the first 
    element to 10.

2. p is assigned to the address of the third element, and *p = 20 sets the third element to 20.

3. p is decremented, pointing to the second element, and *p = 30 sets the second element to 30.

4. p is assigned to the address of the fourth element, and *p = 40 sets the fourth element to 40.

5. p is assigned to the address of the first element, and *(p+4) = 50 sets the fifth element to 50.
*/

/*
Pointers Output

#include <iostream>
using namespace std;
int main()
{ 
  char *ptr; 
  char Str[] = "abcdefg";
  ptr = Str;
  ptr += 5;
  cout << ptr;
  return 0;
}
1. fg                               // Correct
2. cdef
3. defg
4. abcd

Solution Description : Initially ptr will point to 'a'. But as soon as we write ptr+=5, 
                    ptr will shift 5 addresses ahead that is it will point to 'f' and thus 
                    when we are printing ptr, it will print all the characters starting from 
                    'f' till it encounter NULL character, so output is "fg".
*/

/*
Characters & Pointers

#include <iostream>
using namespace std;
int main()
{
  char arr[20];
  int i;
  for(i = 0; i < 10; i++) {
    *(arr + i) = 65 + i;
  }
  *(arr + i) = '\0';
  cout << arr;
  return 0;
}

1. ABCDEFGHIJ                               // Correct
2. AAAAAAAAAA
3. JJJJJJJJ
4. none of the mentioned

Solution Description : *(arr + i) is equivalent to arr[i]. Since arr is an character array, 
                so 65 + i will be typecasted to corresponding character for each i from 0 to 9. 
                Since at last , we are appending the NULL character,
                so arr will become string and thus we get the output as "ABCDEFGHIJ".
*/

/*
Pointers Output

#include<iostream>
using namespace std;
void swap (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}

int main()
{
   char *x = "ninjasquiz";
   char *y = "codingninjas";
   char *t;
   swap(x, y);
   cout<<x << " "<<y;
   t = x;
   x = y;
   y = t; 
   cout<<" "<<x<< " "<<y;
   return 0;
}
Note: On executing this code, a warning will appear: "ISO C++ forbids converting a 
string constant into 'char*'. " Ignore the warning and then print the expected output.
1. codingninjas ninjasquiz codingninjas ninjasquiz
2. ninjasquiz codingninjas ninjasquiz codingninjas
3. ninjasquiz codingninjas codingninjas ninjasquiz                              // Correct
4. Compiler Error

*/

/*
Pointers Output

#include <iostream>
using namespace std;
int main()
{
  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";
  cout<< ptr2 - ptr1;
  return 0;
}

1. 90.5 3                                   // Correct
2. 90.5 12
3. 10.0 12
4. undefined
Solution Description :
1. float *ptr1 = &arr[0]; sets ptr1 to point to the first element of the array (12.5).

2. float *ptr2 = ptr1 + 3; sets ptr2 to point to the fourth element of the array (90.5).

3. cout<<*ptr2<<" "; prints the value pointed by ptr2, which is 90.5.

4. cout<< ptr2 - ptr1; calculates the difference between the two pointers, which is 3 
    (since ptr2 points to the fourth element and ptr1 points to the first element).

*/

/*
Pointers Output

#include<iostream>
using namespace std;
int main() {
  char st[] = "ABCD";
  for(int i = 0; st[i] != ‘\0’; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }
  return 0;
}

1. AAAABBBBCCCCDDDD
2. ABCD
3. A65AAB66BBC67CCD68DD                             // Correct
4. Compilation Error

Solution Description : st[i] is equivalent to *(st+i) and i[st], so all three will print 
                the same thing that is the ith character of the given string.

        *(st) + i: prints the  ASCII value of the first character ('A') plus the index i as 
        when character and integer are added, implicit typecasting to integer is done.

*/

/*
Pointers Output

#include <iostream>
using namespace std;
void Q(int z)
{
  z += z;
  cout<<z << " ";
}

void P(int *y) 
{
  int x = *y + 2;
  Q(x);
  *y = x - 1; 
  cout<<x << " ";
}

int main()
{
  int x = 5;
  P(&x);
  cout<<x;
  return 0;
}

1. 7 6 14
2. 14 7 5
3. 14 7 6
4. 14 6 5

Solution Description :
1. In the main function, x is initialized with the value 5.

2. The function P is called with the address of x (&x).

3. Inside P, *y will give the value as 5 and thus local variable x of function P 
    is updated with 7. 

4. The function Q is called with the value 7, which doubles it and prints 14.

5. Back in P, x is updated to 7 - 1 = 6, and 7 is printed.

6. Finally, in the main function, the updated value of x (6) is printed.
*/

/*
Pointers Output

#include<iostream>
using namespace std;
int main()
{
  int ***r, **q, *p, i=8;
  p = &i;
  (*p)++;
  q = &p;
  (**q)++;
  r = &q;
  cout << *p << " " << **q << " "<< ***r;
  return 0;
}

1. 8 8 8
2. 10 10 10                                         // Correct
3. 9 10 11
4. 9 10 10

*/

/*
Pointers Output

int f(int x, int *py, int **ppz){
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

int main() {
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);
    return 0;
}

1. 21
2. 18
3. 19                                   // Correct
4. 24

Solution Description :
1. When f() is called, x=c=4, *py=*b=4, **ppz=4.

2. **ppz += 1; modifies the value of c to 5.

3. *py += 2; modifies the value of c to 7.

4. x += 3; modifies the value of x to 7.

5. The function returns x+y+z = 7+7+
*/