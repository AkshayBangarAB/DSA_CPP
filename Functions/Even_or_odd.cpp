#include <iostream>
using namespace std;
int get_Even_Odd_Numer(int n){
        if(n % 2 == 0 ){
        cout << "Even number";
        }
        else{
            cout << "Odd number";
        }
    }
int main(){
    int n;
    cout << "ente the value of n: ";
    cin >> n;

    int ans = get_Even_Odd_Numer(n);
    return 0;
}