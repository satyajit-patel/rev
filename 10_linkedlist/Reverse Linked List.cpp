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
// https://leetcode.com/problems/reverse-linked-list/description/ 
class Solution {
public:
    ListNode* newHead;
    ListNode* newTail;
    void add_at_end(int val) {
        if(!newHead) {
            ListNode* newNode = new ListNode(val);
            newHead = newNode;
            newTail = newNode;
            return;
        }
        ListNode* newNode = new ListNode(val);
        newTail->next = newNode;
        newTail = newNode;
    }

    ListNode* reverseList(ListNode* head) {
        std::vector<int> v;
        ListNode* temp = head;
        while(temp) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        std::reverse(v.begin(), v.end());
        newHead = NULL;
        newTail = NULL;
        for(auto& it:v) add_at_end(it);
        return newHead;
    }
};