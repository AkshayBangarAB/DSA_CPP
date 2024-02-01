// Find the unique elemnt in an array
// Given an array find the unique element.
#include <iostream>
using namespace std;
#include <vector>
int findUnique( vector<int> arr){
    int ans =0;
    for (int i=0; i<arr.size();i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements: "<< endl;
    for (int i =0; i<arr.size();i++){
        cin >> arr[i];
    }
    
    int unique_element = findUnique(arr);
    cout << "Unique element is: "<<unique_element<< endl;

    return 0; 
}