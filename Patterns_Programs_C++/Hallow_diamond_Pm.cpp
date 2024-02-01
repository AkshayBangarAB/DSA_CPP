// Write a program to print Hallow Diamond pattern

#include <iostream>
using namespace std;
int main(){
    int n; 
    cout << "Enter a number n: ";
    cin >> n;

    // first half 
    for(int row =0 ; row<n; row++){
        // spaces
        for(int col=0; col<n-row-1; col++){
            cout << " ";
        }
        // for no of characters
        for(int col =0; col<2*row +1; col++){
            // for first and last character
            if(col==0 || col == 2*row){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    // Secod half
    for(int row =0; row<n; row++){
        //  spaces
        for(int col =0; col<row; col++){
            cout << " ";
        }
        // for no of characters
        for(int col =0;col<2*n-2*row-1; col++){
            // for first and last characters
            if(col==0 || col== 2*n-2*row-2){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}
