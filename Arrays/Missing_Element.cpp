// Given an array find the missing element

#include <iostream>
using namespace std;

void findMissing(int *arr, int n){

     for(int i=0; i<n;i++){
        int index = abs(arr[i]);
        if(arr[index-1] >0){
            arr[index-1] *= -1;
        }
     }   

     for(int i=0;i<n;i++){
        if(arr[i]>0)
        cout << i+1<<" ";
     }

}
int main(){
    int n;
    int arr[] = {1,3,4,3,5};
    n = sizeof(arr)/sizeof(int);

    findMissing(arr,n);
    return 0;
}


