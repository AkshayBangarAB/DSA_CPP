// write a simple program to perform selection sort
// Given an array perform selection sort on it

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int a[] ={2,5,4,6,7,1,9};
    int n= 7;

    for(int i =0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(a[j] < a[minIndex]){
                minIndex = j;
            }
        }
        swap(a[i],a[minIndex]);
    }
        for(int i=0; i<n ; i++){
        cout<< a[i]<<" ";
    }
    return 0;
}