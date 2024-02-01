// write a program to perform Binary search on Nearly sorted array

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int s=0;
    int e= arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
    if(arr[mid]== target){
        return mid;
    }
    if(mid-1>= s && arr[mid-1]== target){
        return mid-1;
    }
    if(mid+1 <=e && arr[mid+1] == target){
        return mid+1;
    }
    if(arr[mid]<target){
    s=mid+2;
    }
    else{
    e = mid-2;
    }
    mid = s+(e-s)/2;
   }    
   return -1;
}
int main() {

    vector<int> arr{4,2,8,7,12,10};
    int target;
    cout << "Enter the number to find in giver Array: ";
    cin>> target;
    // int target  = 10;
    int ans = binarySearch(arr, target);
    cout << "Index of "<<target<< " is : "<<ans;

    return 0;
}