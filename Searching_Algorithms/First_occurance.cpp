//Write a program to find first occurance using Binary search 

#include <iostream>
#include <vector>
using namespace std;
int firstOccurence(vector<int> v, int target){
   int s = 0;
   int e = v.size()-1;
   int mid = s+(e-s)/2;
   int ans=-1;
   while (s<=e)
   {
    if(v[mid] == target){
       ans = mid;
       e = mid-1;
    }
    else if(target > v[mid]){
        s = mid+1;
    }
    else if(target <v[mid]){
        e= mid-1;
    }
    mid= s+(e-s)/2;
   }
   return ans;
}
int main(){

vector<int> v{1,2,3,3,2,1,1,4,4,4,4,5,14,15,16};
int target = 4;
int indexOfFirstOcc= firstOccurence(v,target);
cout<< indexOfFirstOcc;
return 0;
}