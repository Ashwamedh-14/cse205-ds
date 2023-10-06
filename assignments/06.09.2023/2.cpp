#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            int Sum = 0, Carry = 0;
            ListNode* head2 = l2;
            ListNode* temp;

            while(l1 || l2 || Carry){
                Sum = l1->val + l2->val + Carry;
                l2->val = Sum % 10;
                Carry = Sum /10;
                if (!l1->next && Carry){
                    temp = new ListNode();
                    l1->next = temp;
                }
                if (!l2->next && Carry){
                    temp = new ListNode();
                    l2->next = temp;
                }
                l1 = l1->next;
                l2 = l2->next;
            }

            return head2;
        }
};

int main(){
    
}