// Write a program to print Half Pyramid pattern

#include <iostream>
using namespace std;
int main(){
    int rowCount, colCount;
    cout << "Enter a number of row: ";
    cin >> rowCount;
    for(int row = 0; row <rowCount; row++){
        for (int col=0; col<row+1 ; col++){
            cout << col+1;
        }
        cout << endl;
    }
}