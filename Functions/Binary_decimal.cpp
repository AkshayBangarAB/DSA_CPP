#include <iostream>
#include <cmath>
using namespace std;
int binartToDecimal(int n){
    int i =0;
    int decimal =0;
    while(n){
        int bit = n%10;
        decimal  = decimal +bit* pow(2,i++);
        n=n/10;
    }
    return decimal;
}
int main(){
    int n;
    cout <<"Enter a number";
    cin >> n;

    cout << binartToDecimal(n)<<endl;
}