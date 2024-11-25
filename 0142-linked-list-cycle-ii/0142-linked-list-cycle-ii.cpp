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
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = head;
        ListNode* fast = head;
        ListNode* slow = head;
        if(head==NULL || head->next == NULL || head->next->next == NULL){
            return nullptr;
        }
        while(slow&&fast->next&&fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(slow!=fast){
            return nullptr;
        }
        while(temp != slow){
            temp = temp->next;
            slow = slow->next;
        }
        return temp;
    }
};