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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;
        ListNode *first = head, *second = head;
        if (head->next->next == nullptr) {
            if (n == 1) {
                head->next = nullptr;
                return head;
            }
            if (n == 2) {
                head = head->next;
                return head;
            }
        }
        for (int i = 0; i <= n; i++)
            first = first->next;
        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }
        second->next = second->next->next;
        return head;
    }
};