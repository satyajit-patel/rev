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
    ListNode* head;
    ListNode* tail;

    void push_back(int val) {
        if(!head) {
            ListNode* newNode = new ListNode(val);
            head = newNode;
            tail = newNode;
            return;
        }
        ListNode* newNode = new ListNode(val);
        tail->next = newNode;
        tail = newNode;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        head = NULL;
        tail = NULL;
        vector<int> a;
        ListNode* temp = list1;
        while(temp) {
            a.push_back(temp->val);
            temp = temp->next;
        }
        temp = list2;
        while(temp) {
            a.push_back(temp->val);
            temp = temp->next;
        }
        std::sort(a.begin(), a.end());
        for(auto& it: a) {push_back(it);}
        return head;
    }
};