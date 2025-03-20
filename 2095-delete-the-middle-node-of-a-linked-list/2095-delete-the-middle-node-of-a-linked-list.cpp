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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return nullptr;
        if(head->next->next == nullptr){
            head->next = nullptr;
            return head;
        }
        ListNode* fast=head,*slow = head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        if(fast->next != nullptr){
            slow->next = slow->next->next;
            return head;
        }
        ListNode* temp = head;
        while(temp->next != slow){
            temp=temp->next;
        }
        temp->next = temp->next->next;
        // delete(slow);
        return head;
    }
};