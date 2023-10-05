#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    public:
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int length = 1;
        ListNode *temp;
        temp = head;
        while (temp->next != nullptr){
            length++;
            temp = temp->next;
        }
        temp = head;
        for(int i = 1; i <= length / 2 + 1; i++){
            temp = head->next;
        }
        return temp;
    }
};