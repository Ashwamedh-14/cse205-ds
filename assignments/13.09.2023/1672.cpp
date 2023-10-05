#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int helper(vector<vector<int>>& accounts, int Sum, int i, int j){
        if (j == accounts[i].size()){
            return Sum;
        }
        Sum += accounts[i][j];
        return helper(accounts, Sum, i, j + 1);
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = INT_MIN;
        for(int i = 0; i < accounts.size(); i++){
            ans = max(ans, helper(accounts, 0, i, 0));
        }
        return ans;
    }
};