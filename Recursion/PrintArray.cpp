#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void printArray(int arr[], int n){
    if(n==0){
        return;
    }
    cout<< *arr <<" ";
    printArray(arr+1, n-1);
}

int main() {

    int arr[]= {1,2,3,4,5};
    int n = 5;

    printArray(arr, n );
    

    return 0;
}