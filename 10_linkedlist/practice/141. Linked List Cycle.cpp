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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false; // carefull
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next) { // carefull
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
            
        }
        return false;
    }
};