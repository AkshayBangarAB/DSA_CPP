// Find the union of two array

#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    int arr[] = {1,2,6,6,4};
    int sizea = 5;

    int brr[] {7,8,9,10};
    int sizeb =4;

    vector<int> ans;
    for(int i=0; i<sizea; i++){
        ans.push_back(arr[i]);
    }
    for(int i=0; i<sizeb; i++){
        ans.push_back(brr[i]);
    }
    for(int i =0; i<ans.size(); i++){
        cout<< ans[i] <<" ";
    }


}