#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        for(int i = 0; i < prices.size(); i++){
            for(int j = i; j < prices.size(); j++){
                if(prices[i] > prices[j]) swap(prices[j], prices[i]);
            }
        }
        if (prices[0] + prices[1] <= money){
            return money - prices[0] - prices[1];
        }
        return money;
    }
};