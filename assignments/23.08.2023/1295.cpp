#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int num;
        for(int i = 0; i < nums.size(); i++){
            num = floor(log10(nums[i])) + 1;
            if (num % 2 == 0) count++;
        }
        return count;
    }
};