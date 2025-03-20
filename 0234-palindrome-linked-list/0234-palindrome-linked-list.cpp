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
    bool isPalindrome(ListNode* head) { 
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next!=nullptr && fast->next->next !=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* curr = slow->next;
        ListNode* prev = nullptr;
        ListNode* nex;
        while(curr != nullptr){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        ListNode* first = head;
        ListNode* second = prev;
        while(second != nullptr){
            if(first->val != second->val) return false;
            first = first->next;
            second = second->next;
        }
        // curr = prev;
        // prev = nullptr;
        // nex;
        // while(nex != nullptr){
        //     nex = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = nex;
        // }
        return true;
    }
};