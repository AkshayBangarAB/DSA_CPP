// Given an arrray perform an exponential search 

#include <iostream>
#include <vector>
using namespace std;
int Bs(int a[], int s, int e, int x){
    while(s<=e){
        int mid = s+(e-s)/2;
        if(a[mid]== x){
            return mid;
        }
        else if(a[mid]< x){
            s= mid+1;
        }
        else
         e=mid-1;
    }
    return -1;
}
int expoSearch(int a[], int n, int x){
    if(a[0] == x){
        return x;
    }
    int i=1;
    while(i<n && a[i]<=x){
        i = i*2;
    }
    return(Bs(a, n/2, min(i,n-1), x));

}
int main() {
    int a [] = {3,4,6,8,10,15,17,19,24,29,38,45,50,60};
    int n= sizeof(a)/sizeof(int);
    int x = 15;

    int ans = expoSearch(a, n, x);
    cout<< "Index is: "<< ans << " ans is: "<<a[ans];

    return 0;
}