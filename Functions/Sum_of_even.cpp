#include <iostream>
using namespace std;

int getEvenSum(int a){
    int sum =0;
    for(int i=0; i<=a; i++){
        if(i%2==0){
        sum = sum+ i;
        }
    }
    return sum;

}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n ;

    int ans = getEvenSum(n);
    cout << "Sum of Even number upto " << n << " is: "<< ans <<endl;
    }