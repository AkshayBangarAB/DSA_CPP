// give an array Print the doubles of an array
// 

#include <iostream>
using namespace std;
int main(){
    int arr[50];
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the elements of array separatedd by spaces"<<endl;
    for(int i=0; i<n; i++){
    cin >> arr[i];
    }
    cout << "Doubles"<< endl;
    for(int i=0; i<n; i++){
        cout << 2*arr[i] << " ";
    }
}