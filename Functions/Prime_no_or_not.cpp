#include <iostream>
using namespace std;


bool isPrime(int num){
    if(num<2)
    return false;
    
    for(int i=2; i*i<=num; i++){
        if(num%2==0)
        return false;
    }
    return true;
}
void print_Primes(int n){

    if(isPrime(n)){
        cout << n << ": is Prime number";
    }
    else
    cout <<n <<": is not a Prime number";

}
int main(){
    int n ;
    cout << "Enter a value of n: ";
    cin >> n;
    print_Primes(n);
    return 0;


}