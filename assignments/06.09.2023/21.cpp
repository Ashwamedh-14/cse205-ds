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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL){
            return list2;
        }
        if (list2 == NULL){
            return list1;
        }
        ListNode *ans = list1;
        if (list1->val > list2->val){
            ans = list2;
            list2 = list2->next;
        }
        else{
            list1 = list1->next;
        }
        ListNode *temp = ans;
        while(list1 && list2){
            if (list1->val <= list2->val){
                temp->next = list1;
                list1 = list1->next;
            }
            else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        if (!list1) temp->next = list2;
        else temp->next = list1;
        return ans; 
    }
};