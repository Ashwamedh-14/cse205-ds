#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    vector<vector<int>> ans;

    void sub(int i, vector<int>& nums, vector<int>& temp){
        if(i==nums.size()){
            for(int j = 0; j < ans.size(); j++){
                if (ans[j] == temp) return;
            }
            ans.push_back(temp);
            return;
        }

        sub(i+1,nums,temp);
        temp.push_back(nums[i]);
        sub(i+1,nums,temp);
        temp.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(), nums.end());
        sub(0,nums,temp);
        return ans;
    }
};