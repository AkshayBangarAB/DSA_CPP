//Write a Binary search program to perform division operation
// Write a program to perform division using binary search

#include <iostream>
#include <vector>
using namespace std;

int solve(int dividend, int divisor){
    int s=0;
    int e= abs(dividend);
    int mid = s+ (e-s)/2;
    int ans =-1;

    while(s<=e){
        if(dividend == 0 && divisor==0){
            cout<<"Result is Undifined "<<endl;
        }
        
        if(abs(mid*divisor) == abs(dividend)){
            ans =  mid;
            break;
        }
        if(abs(mid*divisor) > abs(dividend)){
            e= mid-1;
        }
        else{
            ans = mid;
            s=mid+1;
        }
        mid = s+ (e-s)/2;
    }
    if((dividend<0 && divisor<0)||(dividend>0 && divisor>0)){
        return ans;
    }
    else
    return -ans;
}
int main() {

    int dividend ;
    cout <<"Enter the Dividend: ";
    cin>> dividend;
    int divisor;
    cout <<"Enter the Divisor: ";
    cin>> divisor;

    int ans = solve(dividend, divisor);
    cout << "Quotient of "<<dividend << " / "<<divisor<<" is: " << ans;

    return 0;
}