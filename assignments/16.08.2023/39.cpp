#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void helper(vector<vector<int>>& nums, vector<int>& help, vector<int>& cand, int t, int n){
        if (t == 0){
            nums.push_back(help);
            return;
        }

        if (n == 0){
            return;
        }

        if (cand[n - 1] <= t){
            help.push_back(cand[n - 1]);
            helper(nums, help, cand, t - cand[n - 1], n);
            help.pop_back();
        }

        helper(nums, help, cand, t, n - 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> help;
        helper(ans, help, candidates, target, candidates.size());
        return ans;
    }
};