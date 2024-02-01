// Write a program to print Numeric full pyramid pattern

#include <iostream>
using namespace std;
int main(){
    int n;
    
    cout << "Enter a Number n: ";
    cin >> n;

    for(int row=0; row<n; row++){

        for(int col =0; col<n-row-1; col++){
            cout << "  ";
        }
        
        int start = row+1;
        for(int col=0; col<row+1; col++){
            cout << start << " ";                  
            start = start+1;
        }

        int start1 = 2*row;
        for(int col =0; col<row;col++){  
            cout << start1 << " ";                  
            start1 = start1-1;
        }
       cout << endl;
    }
}