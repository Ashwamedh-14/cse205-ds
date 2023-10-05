#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> arr = heights;
        int count = 0;
        for(int i = 0; i < n; i++){
            int Min = arr[i];
            int idx = i;
            for(int j = i; j < n; j++){
                idx = (Min == min(Min, arr[j])) ? idx : j;
                Min = min(Min, arr[j]);
            }
            swap(arr[i], arr[idx]);
        }
        for(int i = 0; i < n; i++){
            if (arr[i] != heights[i]) count++;
        }
        return count;
    }
};

int main(){
    vector<int> arr = {1,1,4,2,1,3};
    Solution a;
    a.heightChecker(arr);
    return 0;
}