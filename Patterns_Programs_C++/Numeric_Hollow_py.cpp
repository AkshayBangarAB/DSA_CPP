// Write a program to print Numeric Hollow Pattern

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number n: ";
    cin >> n;

    for (int row= 0; row < n; row ++)
    {
        // for spaces
        for (int col =0; col <n-row -1; col++){
            cout << " ";
        }
        
        int start =1;
        for (int col=0 ; col<2*row+1; col++){
            // for first and last rows
            if(row ==0 || row == n-1){
                if(col%2 ==0){
                    cout << start;
                    start = start+1;
                }
                else{
                    cout << " ";
                }
            }
            else{
                // middel rowsand spaces
                if(col == 0){
                    cout << 1;
                }
                else if (col == 2*row)
                {
                    cout << row+1;
                }
                else{
                    cout << " ";
                }
            }
        }
        cout <<endl;
    
    }
    
}