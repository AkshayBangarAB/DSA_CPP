#include <iostream>
#include <vector>
using namespace std;


int main() {

    int a[] ={2,4,3,1,6,7};
    int n= 6;
    for(int i=1; i<n;i++){
        int count=0;
        for(int j=0; j<n-i;j++){
            if(a[j] > a[j+1]){
             swap(a[j], a[j+1]);
             count++;
            }
        }
        if(count==0){
            break;
        }
    }
    for(int i=0; i<n ; i++){
        cout<< a[i]<<" ";
    }
    return 0;
}