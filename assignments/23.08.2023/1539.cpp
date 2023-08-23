#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ans, ch = 0;
        for(int i = 0; i < arr.size(); i++){
            if (arr[i] - ch > 1 && arr[i] - ch <= k){
                k -= arr[i] - ch - 1;
            }
            else if(arr[i] - ch > 1 && arr[i] - ch > k){
                return ch + k;
            }
            ch = arr[i];
        }
        return ch + k;
    }
};