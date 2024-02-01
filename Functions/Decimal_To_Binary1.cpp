#include <iostream>
#include <cmath>
using namespace std;
// int decimalToBinaryM1(int n){
//     // Divide method by base 2
//     int binaryno =0;
//     int i =0;

//     while(n>0){
//     int bit = n % 2;
//     binaryno = bit *pow(10,i++) +binaryno;
//     n =n / 2;
//     }
//     return binaryno;
// }

int decimalToBinaryM2(int n){
    int binaryno=0;
    int i=0;
    while(n>0){
        int bit = (n & 1);
        binaryno = bit *pow(10, i++)+ binaryno;
        n = n >> 1;
    }
    return binaryno;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // int binary = decimalToBinaryM1(n);
    int binary = decimalToBinaryM2(n);

    cout << binary;
}