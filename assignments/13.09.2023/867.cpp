#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        vector<int> temp;
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int i = 0; i < cols; i++){
            for(int j = 0; j < rows; j++){
                temp.push_back(matrix[j][i]);
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};