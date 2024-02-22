#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int printFobbo(int n){
    if(n==0 || n==1){
    return n;
    }

    return printFobbo(n-1) + printFobbo(n-2);
}
int main() {

    int n;
    cout<< "Enter a Number: ";
    cin>> n;

    int ans = printFobbo(n);
    cout<<"Fibonacci of "<< n << " is: "<< ans << endl;

    return 0;
}