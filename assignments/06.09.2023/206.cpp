#include <bits/stdc++.h>

using namespace std;

class ListNode{
    public:
        int val;
        ListNode *next;

        ListNode(){
            val = 0;
            next = nullptr;
        }
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = NULL;
        ListNode *curr;
        while(head != NULL){
            curr = head->next;
            head->next = temp;
            temp = head;
            head = curr;
        }
        return temp;
    }
};