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
// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/ 
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        std::string bit_string = "";
        ListNode* temp = head;
        while(temp) {
            bit_string += std::to_string(temp->val);
            temp = temp->next;
        }
        std::bitset<32> b(bit_string);
        return b.to_ulong();
    }
};