#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int idx = 0;
        int curr;
        int profit = 0;
        for(int i = 1; i < prices.size(); i++){
            if (prices[i] - prices[idx] >= profit){
                profit = prices[i] - prices[idx];
            }
            if (prices[i] - prices[i - 1] >= profit){
                profit = prices[i] - prices[i - 1];
                idx = i - 1;
            }
            if (prices[i - 1] < prices[idx]){
                idx = i - 1;
            }
        }
        return profit;
    }
};