/*
Reference Variable

What is the correct syntax of declaring and defining a reference?

1. int a = 10; int &b; b = a;
2. int a = 10; int &b = a;          // Correct
3. int a = 10; int b = &a;
4. int a = 10; int &b = &a;
*/

/*
What is the output
#include <iostream>
using namespace std;

void func(int p){
    cout << p << " ";
}

int main(){
    int i = 10;
    int &p = i;
    func(p++);
    cout << i;
}

Output : 10 11
*/

/*
What is the output

#include <iostream>
using namespace std;

void func(int i, int& j, int p){
    i++;
    j++;
    p++;
}

int main(){
    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i << " " << j << " " << p;
}
Output : 10 7 10
*/