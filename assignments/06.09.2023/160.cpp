#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        int counta = 0, countb = 0;
        while (a){
            counta++;
            a = a->next;
        }
        while (b){
            countb++;
            b = b->next;
        }
        if (counta >= countb){
            a = headA;
            b = headB;
        }
        else{
            a = headB;
            b = headA;
        }

        for(int i = 0; i < abs(counta - countb); i++){
            a = a->next;
        }
        if(a == b){
            return a;
        }
        while(a->next && b->next){
            if(a->next == b->next){
                return a->next;
            }
            a = a->next;
            b = b->next;
        }

        return NULL;
        
    }
};