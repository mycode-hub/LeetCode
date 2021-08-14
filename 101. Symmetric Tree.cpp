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
    bool checkmirror(TreeNode* root1 ,TreeNode* root2)
    {
        if( !root1 && !root2)
            return 1;
        if( root1 && root2 )
        {
            return root1->val == root2->val &&  checkmirror(root1->left,root2->right ) && checkmirror(root1->right,root2->left );
        }
        return 0;
    }
    bool isSymmetric(TreeNode* root) {
        return checkmirror(root,root);
    }
};
