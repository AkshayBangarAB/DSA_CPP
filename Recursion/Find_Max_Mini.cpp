#include <iostream>
#include <vector>
#include <string.h>
#include <limits.h>
using namespace std;

void findMaxi(int arr[], int n, int i, int& maxi, int& mini){
    if(i >= n)
    return;

    if(arr[i]> maxi){
        maxi = arr[i];
    }

    if(arr[i]< mini){
        mini = arr[i];
    }

    findMaxi(arr, n, i+1, maxi, mini);

}

int main() {

int arr[] = {19, 20, 30, 5, 44, 85, 43, 78};
int n = sizeof(arr)/sizeof(int);
int i =0;
int maxi = INT_MIN;
int mini = INT_MAX;

findMaxi(arr, n, i, maxi, mini);
cout<< "Maximum number in an array is: "<< maxi<<endl;;
cout<< "Manimum number in an array is: "<< mini;




    return 0;
}