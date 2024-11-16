/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* x1 = headA;
        ListNode* x2 = headB;
        while(x1 != x2){
            x1 = x1==NULL ? headA : x1->next;
            x2 = x2==NULL ? headB : x2->next;
        }
        return x1;
    }
};