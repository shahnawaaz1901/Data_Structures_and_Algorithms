/*
Pointers Output

Figure out the correct output of the following code.
void changeSign(int *p){
  *p = (*p)  *  -1;
}

int main(){
  int a = 10;
  changeSign(&a);
  cout << a << endl;
}

1. -10              // Correct
2. 10
3. Error
4. None of the above

Solution Description :
1. The changeSign function is called with the address of 'a' as an argument.


2. Inside the changeSign function, the value at the address pointed by 'p' is multiplied by -1.


3. This changes the value of 'a' to -10.


4. The main function then prints the value of 'a', which is now -10.

*/

/*
Fill the output

void fun(int a[]) {
    cout << a[0] << " ";
}

int main() {
    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0];
}

Output : 2 1

*/

/*
Pointers Output

What will be the output ?
void square(int *p){
    int a = 10;
    p = &a;
    *p = (*p) * (*p);
}

int main(){
 int a = 10;
 square(&a);
 cout << a << endl;
}

1. 100
2. 10                       // Correct
3. Error
4. None of these

Solution Description :
1.The address of 'a' is passed to the square function as an argument .


2. Inside the square function, a new local variable a is created and now p will 
    store the address of this local variable.


3. The value at the address pointed by 'p'(local variable a) is squared.


4.The value of a inside main function will remain unchanged and thus output 
    will be "10". 
*/