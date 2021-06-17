/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if( root == NULL)
            return root;
        if( root == p || root==q )                  // if any of node found return current node
            return root;
        // ask lca to both the children
        TreeNode* a = lowestCommonAncestor(root->left , p ,q);
        TreeNode* b = lowestCommonAncestor(root->right,p,q);
        //if both children returns non null values return current root as lca
        if( a && b)
            return root;
        // if only one children returns non null return that child.
        if(!a)
            return b;
        return a;

    }
};
