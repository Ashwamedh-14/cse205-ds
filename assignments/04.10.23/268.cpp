#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int Min = nums[i];
            int idx = i;
            for(int j = i; j < nums.size(); j++){
                idx = (Min == min(Min, nums[j])) ? idx : j;
                Min = min(Min, nums[j]);
            }
            swap(nums[i], nums[idx]);
        }
        int val;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] != i){
                val = i;
                break;
            }
        }
        return val;
    }
};

int main(){
    Solution a;
    vector<int> arr = {9,6,4,2,3,5,7,0,1};
    cout << a.missingNumber(arr) << endl;
    return 0;
}