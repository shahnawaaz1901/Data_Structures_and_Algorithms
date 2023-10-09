#include<iostream>
using namespace std;

void increment(int n){              // Passed Argument is Pass By Value ( Use Different Memory )
    n++;
}
// Name Not metter in Pass by reference 
void incremenyByRef(int &j){        // Passed Argument is Pass By Reference ( Use Same Memory )
    j++;
}
int main(){
    int n = 100;
    increment(n);
    cout << "After Pass By Value : " << n << endl;          // Changes Not Reflected Because Pass By Value
    incremenyByRef(n);
    cout << "After Pass By Reference : " << n << endl;      // Changes Reflected Because Pass By Reference
}
/*
    if i do this
    int& i(int n){
        int a = n;
        return a;
    }
    int main(){
        int j = 10;
        int &l = i(j)
    }
    Above Expression Gives Error Because in function i a scorpe is between i. 
    This is Bad Practice Because a is created locally
*/