/*
Pointers Output

What will be the output ?
char ch = 'a';
char* ptr = &ch;
ch++;
cout << *ptr << endl;

1. a                    
2. b                        // Correct
3. 97
4. 98
Solution Description :
1. char ch = 'a'; assigns the character 'a' to the variable ch.

2. char* ptr = &ch; creates a pointer ptr pointing to the address of ch.

3. ch++; increments the value of ch by 1, changing it to 'b'.

4. cout << *ptr << endl; prints the value at the address pointed by ptr, which is now 'b'.
*/

/*
What is the output

Assume address of 0th index of array ‘b’ is 200. What is the output -
char b[] = "xyz";
char *c = &b[0];
cout << c << endl;
1. 200
2. x
3. xyz                              // Correct
4. None of these

Solution Description : c stores the address of start of array b (and not of it’s values). 
                    So the entire array is printed when c is printed.
*/

/*
What is the output

Assume address of 0th index of array ‘b’ is 200. What is the output -
char b[] = "xyz";
char *c = &b[0];
c++;
cout << c << endl;

1. 201
2. y
3. xyz
4. yz                           // Correct
*/

/*
Fill the output

char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];

Output : h h
*/