#include <iostream>
using namespace std;

int getSum(int a){
int sum = 0;
for(int i = 1; i<=a; i++){
    sum = sum +i;
    
}
return sum;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >>n;

    int sum = getSum(n);
    cout << "Sum upto "<< n << " is: "<< sum << endl;
    return 0;
    }