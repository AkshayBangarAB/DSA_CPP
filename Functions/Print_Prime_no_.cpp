#include <iostream>
using namespace std;
bool isPrime(int num){
    if(num<2)
        return false;

    for(int i=2; i*i<=num; i++ ){
        if(num% i ==0)
        return false;
    }
    return true ;
}

void printsPrimes(int n){
    for (int i =2 ; i<=n; i++){
        if(isPrime(i)){
        cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int n;
    cout <<"Enter the value of n:";
    cin >> n;
    printsPrimes(n);
    return 0;
}

