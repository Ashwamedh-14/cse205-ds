#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int len1 = word1.size();
        int len2 = word2.size();
        string s1 = "";
        string s2 = "";

        for (int i = 0; i < len1; i++){
            s1 += word1[i];
        }
        for (int i = 0; i < len2; i++){
            s2 += word2[i];
        }

        if (s1 == s2){
            return true;
        }
        return false;
    }
};