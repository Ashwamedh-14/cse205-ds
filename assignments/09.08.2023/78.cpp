#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int pow_set = pow(2, n);
        vector<vector<int>> power_set;
        vector<int> temp_set;
        for(int i = 0; i < pow_set; i++){
            temp_set.clear();
            for(int j = 0; j < n ; j++){
                if ( i & (1 << j)){
                    temp_set.push_back(nums[j]);
                }
            }
            power_set.push_back(temp_set);
        }
        return power_set;
    }
};