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
    TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q, bool &v1, bool &v2)
    {
        if( root == NULL)
            return root;
        if( root == p)                  // if any of node found return current node
        {
            v1 = true;
            return root;
        }
         if( root == q)                  // if any of node found return current node
        {
            v2 = true;
            return root;
        }
        // ask lca to both the children
        TreeNode* a = helper(root->left , p ,q,v1,v2);
        TreeNode* b = helper(root->right,p,q,v1,v2);
        //if both children returns non null values return current root as lca
        if( a && b)
            return root;
        // if only one children returns non null return that child.
        if(!a)
            return b;
        return a;
    }
    bool find( TreeNode * root, TreeNode*q)
    {
        if( !root)
            return false;
        return (root == q) || find(root->left,q) || find(root->right, q);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        bool v1=false, v2 =false;
        TreeNode* temp = helper(root, p,q,v1,v2);
        if( (v1 && v2 ) || ( !v1 && find(root,p) ) || ( !v2 && find(root,q))  )
            return temp;
        return NULL;
    }
};
