/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_set<int> st;
    bool findTarget(TreeNode* root, int k) {
        // base case
        if(!root) return false;
        if(st.find(k - root->val) != st.end()) return true;

        // recursive case
        st.insert(root->val);

        bool head = findTarget(root->left, k);
        bool tail = findTarget(root->right, k);

        bool ans = head || tail;
        return ans;
    }
};