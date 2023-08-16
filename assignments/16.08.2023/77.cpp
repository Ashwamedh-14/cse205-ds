#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    void helper(vector<vector<int>>& num, vector<int>& help, int n, int k, int i){
        if(help.size() == k){
            num.push_back(help);
            return;
        }
        if (i > n){
            return;
        }
        help.push_back(i);
        helper(num, help, n, k, i + 1);
        help.pop_back();
        helper(num, help, n, k, i + 1);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> num;
        vector<int> help;
        helper(num, help, n, k, 1);
        return num;
    }
};