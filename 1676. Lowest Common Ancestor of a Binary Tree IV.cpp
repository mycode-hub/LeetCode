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
    TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q) {
        if( root == NULL)
            return root;
        if( root == p || root==q )                  // if any of node found return current node
            return root;
        // ask lca to both the children
        TreeNode* a = helper(root->left , p ,q);
        TreeNode* b = helper(root->right,p,q);
        //if both children returns non null values return current root as lca
        if( a && b)
            return root;
        // if only one children returns non null return that child.
        if(!a)
            return b;
        return a;

    }
    TreeNode* lowestCommonAncestor(TreeNode* root, vector<TreeNode*> &nodes) {
        TreeNode* ans = nodes[0];
        for(int i =1 ;i< nodes.size();i++)
            ans = helper(root,ans,nodes[i]);
        return ans;
    }
};
