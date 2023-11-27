/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    
    bool state(Node* node1, Node* node2) {
        // base case
        if(!node1 && !node2) {
            return true;
        }
        if(!node1 && node2) {
            return false;
        }
        if(node1 && !node2) {
            return false;
        }
        if(node1->data != node2->data) {
            return false;
        }
        
        // transition
        // if(!state(node1->left, node2->right)) {
        //     return false;
        // }
        // if(!state(node1->right, node2->left)) {
        //     return false;
        // }
        // return true;
        
        bool head = state(node1->left, node2->right);
        bool tail = state(node1->right, node2->left);
        return head && tail;
    }
    
    bool isSymmetric(struct Node* root) {
	    if(!root) {
	        return true;
	    }
	    return state(root->left, root->right);
    }
};