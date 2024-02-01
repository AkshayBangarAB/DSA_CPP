#include <iostream>
using namespace std;
int b = 15;      //Global variable can be accessed anywhere in the same file
int main(){
    int a =5;   // local variable can be accessed in define scope 

    if(true){
        int a = 4; // Local variable
        cout << a << endl;
        cout << b << endl;
    }
    cout << a;
    }