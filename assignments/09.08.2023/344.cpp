#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<char> reverse(vector<char>& s, int i){
        if (i >= s.size()/2){
            return s;
        }
        swap(s[i], s[s.size() - i - 1]);
        return reverse(s, i+1);
    }
    
    void reverseString(vector<char>& s) {
        reverse(s, 0);
    }

};