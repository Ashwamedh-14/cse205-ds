#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp = {1};
        ans.push_back(temp);
        temp.clear();
        for(int i = 1; i < numRows; i++){
            temp.push_back(1);
            for(int j = 1; j < i - 1; j++){
                temp.push_back(ans[i - 1][j] + ans[i - 1][j - 1]);
            }
            temp.push_back(1);
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};