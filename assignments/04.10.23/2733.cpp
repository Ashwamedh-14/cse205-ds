#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {

        if (nums.size() <= 2){
            return -1;
        }

        for(int i = 0; i < nums.size(); i++){
            int Min = nums[i];
            int idx = i;
            for(int j = i; j < nums.size(); j++){
                idx = (Min == min(Min, nums[j])) ? idx : j;
                Min = min(Min, nums[j]);
                
            }
            swap(nums[i], nums[idx]);
        }
        int Max = nums[nums.size() - 1];
        int Min = nums[0];
        cout << Max << ' ' << Min << '\n';
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] != Max && nums[i] != Min) return nums[i];
        }
        return -1;
    }
};

int main(){
    vector<int> arr = {3,2,1,4};
    Solution a;
    cout << a.findNonMinOrMax(arr);
    return 0;
}
