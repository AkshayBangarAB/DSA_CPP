#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void printArray(int arr[], int n, int i){

//  Base case
    if(i >= n){
        return;
    }
    // cout<< *arr <<" ";
    // printArray(arr+1, n-1);

    cout<< arr[i]<< " ";
    printArray(arr, n, i+1);
}

int main() {

    int arr[]= {10,20,30,40,50};
    int n = 5;
    int i =0;

    printArray(arr, n, i);
    return 0;
}