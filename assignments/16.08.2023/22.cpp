#include <vector>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

class Solution {
public:

    void helper(vector<string>& ans, string temp, int n, int open, int close){
        if ((open == n) && (close == n)){
            ans.push_back(temp);
            return;
        }
        if (close < open){
            helper(ans, temp + ")", n, open, close + 1);
        }
        if (open < n){
            helper(ans, temp + "(", n, open + 1, close);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(ans, "", n, 0, 0);
        return ans;
    }
};