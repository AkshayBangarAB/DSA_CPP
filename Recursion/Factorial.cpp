#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int findFact(int n){
    if(n == 1 )
    return 1;

    return n* findFact(n-1);

}
int main() {

    int n;
    cout<< "Enter a Number: ";
    cin>> n;

    
    int ans= findFact(n);
    cout<<"Factorial of "<< n <<" is: "<< ans << endl;

    return 0;
}