// Given an array find the maximum number of times occuring element

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int ans, count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            ans = nums[i];
        }
        if (nums[i] == ans) {
            count++;
        } else {
            count--;
        }
    }
    return ans;  
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 4, 2, 2, 4, 4, 5, 5};
    cout << "The majority element is: " << majorityElement(nums) << endl;
    return 0;
}