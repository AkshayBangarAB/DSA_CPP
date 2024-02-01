// Write a program to find Square root Using Binary Search 

#include <iostream>
#include <vector>
using namespace std;

double findSqr(double n){
    double s=0;
    double e=n;
    double mid= s+(e-s)/2;
    double target =n;
    double ans=-1;                                 

    while(s<=e){
        if(mid*mid == target){
            return mid;
        }
        if(mid*mid> target){
            // Left search
            e=mid-1;
        }
        else{
            // Ans Store
            ans = mid;
            // Right search
            s = mid+1;
        }
        mid= s+(e-s)/2;
    }
    // return ans;
}
int main() {

    int n;
    cout << "Enter the Number: " ;
    cin >> n;

    int ans= findSqr(n);
    cout <<"Square Root of "<< n <<" is: "<<ans<<endl;

  
    return 0;
}