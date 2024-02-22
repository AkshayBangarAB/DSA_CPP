#include <iostream>
#include <vector>
#include <algorithm>
#include <c++/3.4.5/bits/stl_list.h>
using namespace std;

    int majorityElement(vector<int>& nums) {
        int count =0;
        int ans=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(count == 0){
                ans = nums[i]; 
            }
            if(ans == nums[i]){
                count++;                                     
            }
            else{
                count--;
            }
        }
        return ans;
        }
int main() {


    vector<int> nums{1, 2, 3, 4, 4, 2, 2, 4, 4, 5, 5};
    cout<< "ans: " <<majorityElement(nums);
    

    return 0;
}