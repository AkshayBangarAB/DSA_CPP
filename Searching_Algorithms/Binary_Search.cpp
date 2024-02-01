//Write a program to perform Binary search 
//Write a Binary search program 

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binarySearch(int arr[], int size, int target){
    int start=0;
    int end = size -1;
    int mid = start + (end - start)/2;

    
    while(start<=end){
        int element = arr[mid];
        if (element == target){
            return mid;
        }
        if (target < element){
           end = mid-1;
        }
        else{
           start = mid +1; 
        } 
        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    // int arr[] = {2,4,6,8,10,12,16};
    // int size= 7;
    // int target = 12;

    // int targetIndex = binarySearch(arr, size, target);
    // if(targetIndex == -1){
    //     cout<< "element not found"<<endl;
    // }else{
    // cout <<"Target Element " <<"("<<target<<")"<< " Found at : "<< targetIndex<<" Index"<<endl;
    // }

    vector<int> v{1,4,5,7,8,9,20};
    int arr[] = {1,2,3,4,5,6,7};
    int size=7;
    
    // if(binary_search(v.begin(), v.end(), 21)){  Vector 
    if(binary_search(arr, arr+size,12)){
        cout<< "found" << endl;
    }else
    cout<< "Not Found";

return 0;
}