/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t, *u, *r, *s;
        ListNode* sum = NULL;
        r = sum;
        t = l1;
        u = l2;
        int car=0;
        while (t != NULL || u != NULL) {
            struct ListNode* temp = new ListNode();
            if (t == NULL && u != NULL) {
                temp->val = u->val + car;
                car = 0;
                temp->next = NULL;
                u = u->next;
            } else if (t != NULL && u == NULL) {
                temp->val = t->val + car;
                car = 0;
                temp->next = NULL;
                t = t->next;
            } else {
                temp->val = t->val + u->val + car;
                car = 0;
                temp->next = NULL;
                t = t->next;
                u = u->next;
            }
            if (temp->val >= 10) {
                car = temp->val/10;
                temp->val = temp->val % 10;
            }
            if (sum == NULL) {
                sum = temp;
            }
            else {
                r = sum;
                while (r->next!=NULL)
                    r = r->next;
                r->next = temp;
            }
        }
        if (car >= 1) {
            struct ListNode* temp = new ListNode();
            temp->val = car;
            temp->next = NULL;
            r=sum;
            while (r->next!=NULL)
                    r = r->next;
            r->next = temp;
        }

        return sum;
    }
};