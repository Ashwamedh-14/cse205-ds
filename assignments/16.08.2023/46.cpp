#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    void helper(vector<vector<int>>& ans, vector<int>& nums, int n, int i){
        if (i == n){
            ans.push_back(nums);
            return;
        }
        // if (i > n){
        //     return;
        // }
        for(int j = i; j < n; j++){
            swap(nums[i], nums[j]);
            helper(ans, nums, n, i + 1);
            swap(nums[i], nums[j]);
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        helper(ans, nums, n, 0);
        return ans;
    }
};