#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Max = nums[0];
        int curr = nums[0];

        for(int i = 1; i < nums.size(); i++){
            curr = max(nums[i], curr + nums[i]);
            Max = max(Max, curr);
        }
        return Max;
    }
};