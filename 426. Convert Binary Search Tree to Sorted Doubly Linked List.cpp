/*
Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/

class Solution {
public:
    Node *last, *first;
    void helper(Node *root)
    {
        if(!root)
            return;
        helper(root->left);
        if(!last)
            first = root;
        else
        {
            root-> left = last;
            last -> right = root;
        }
        last = root;
        helper(root->right);
    }
    Node* treeToDoublyList(Node* root) {
        if( !root)
            return NULL;
         first =NULL, last = NULL;
        helper(root);
        last -> right = first;
        first -> left = last;
        return first;
    }
};
