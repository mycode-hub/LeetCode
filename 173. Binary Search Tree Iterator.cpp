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
class BSTIterator {
public:
    stack<TreeNode *> *s;
    BSTIterator(TreeNode* root) {
        s = new stack<TreeNode*>();
        leftorder(root);
    }
    void leftorder( TreeNode *root)
    {
        while( root)
        {
            s->push(root);
            root = root->left;
            
        }
    }
    int next() {
        TreeNode * topmostnode = s->top();
        s->pop();
        if( topmostnode->right)
        {
            leftorder(topmostnode->right);
        }
        return topmostnode->val;
    }
    
    bool hasNext() {
        if( s->size() > 0 )
            return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
