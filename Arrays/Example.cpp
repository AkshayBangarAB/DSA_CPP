// Given an array Find the target sum of possible elements in an array

#include <iostream>
using namespace std;

int main(){

    int arr[] = {10,20,30,40,50,60,70};
    int sizea= 7;
    int sum = 80;

for(int i =0; i<sizea;i++){
    for(int j=i+1; j<sizea;j++){
        for(int k=j+1; k<sizea; k++){
            if(arr[i] +arr[j]+ arr[k]== sum){
                cout<< "Sum Elements found :"<< arr[i]<<","<<arr[j]<<","<<arr[k]<<","<< endl;
            }

        }
    }
}
    return 0;
}
