// Write a program to print inverted full pyramid

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number n: ";
    cin >>n;
    for(int row=0; row<n; row++){
        for(int col =0; col<row; col++){
            cout << " ";
        }
        for(int col =0; col< n-row; col++){
            cout <<"* ";
        }
        cout << endl;
    }

}