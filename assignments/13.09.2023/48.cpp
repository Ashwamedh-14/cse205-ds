#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix){
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j <= i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0; i < matrix.size(); i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    Solution a;
    a.rotate(arr);
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}