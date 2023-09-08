/*
What is the output

Assume integer takes 4 bytes and integer pointer 8 bytes.
int a[5];
int *c;
cout << sizeof(a) << “ “ << sizeof(c);
1. 8 8
2. 5 8
3. 20 8         // Correct
4. 20 4
*/

/*
Fill the output

int a[] = {1, 2, 3, 4};

cout << *(a) << " " << *(a+1);
Output : 1 2
Solution Description : a points 0th index or array and a + 1 points first index of array
*/

/*
Fill the output

Assume that address of 0th index of array ‘a’ is : 200.
What is the output -

int a[6] = {1, 2, 3};
cout << a << “ “ << &a;
1. Error
2. 200 204
3. 200 200              // Correct
4. 1 200
5. 200 1

Solution Description : Both Prints 0th index address of array Because a not alloted any seprate
                memory address.

*/

/*
Fill the output

Assume that address of 0th index of array ‘a’ is : 200. What is the output -
int a[3] = {1, 2, 3};
cout << *(a + 2);

Output : 3
*/

/*
What is the output

Assume address of 0th index of array 'a' is 200.
What is the output -
int a[6] = {1, 2, 3};
int *b = a;
cout << b[2];

1. Error
2. 3            // Correct
3. 1
4. 200
5. 212

*/

/*
What is the output

Assume address of 0th index of array 'a' is 200.
What is the output -
int a[] = {1, 2, 3, 4, 5};
cout << *(a) << " " << *(a + 4);

1. Error
2. 200 216
3. 1 5              // Correct
4. None of these
*/

/*
What is the output

int a[] = {1, 2, 3, 4};
int *p = a++;
cout << *p << endl;

1. 1
2. 2
3. Garbage value
4. Error    // Correct
*/