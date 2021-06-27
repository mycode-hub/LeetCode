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
    void helper(TreeNode*  A)
    {
        if( A )
        {
            helper(A->left);
            helper(A->right);
            TreeNode * temp = A->right;
            A->right  = A->left;
            A->left = NULL;
            TreeNode * p =A;
            while(p->right != NULL)
                p= p -> right;
            p->right = temp;
        }
    }
    void flatten(TreeNode* root) {
        helper(root);
    }
};
