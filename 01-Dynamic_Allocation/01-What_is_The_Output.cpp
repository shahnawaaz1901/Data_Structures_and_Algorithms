/*
void pointer

Void pointer can point to which type of objects ?

1. int
2. double
3. float
4. All              // Correct

*/

/*
What is the output

int main()
{
    int d = 65;
    int i = d;
    char ch = i;
    cout << ch << endl;
}

Output : 'A'

*/


/*
What is the output

#include <iostream>
using namespace std;
void updateValue(int *p){
    *p = 610 % 255;
}

int main(){
    char ch = 'A';
    char *pt = &ch;
    updateValue((int*)pt);
    cout << ch;
}

Output : 'd'

*/