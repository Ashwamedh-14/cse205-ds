#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int> temp;
        while (nums.size() != 1){
            for(int i = 0; i < nums.size() - 1; i++){
                temp.push_back((nums[i] + nums[i + 1]) % 10);
            }
            nums = temp;
            temp.clear();
        }
        return nums[0];
    }
};