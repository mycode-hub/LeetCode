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
    void helper(TreeNode* root , int level, int &mx)
    {
        if( !root)
            return;
        if( !root-> left && !root->right)
        {
            mx = min ( mx, level);
        }
        helper(root->left , level +1, mx);
        helper(root->right , level +1, mx);
    }
    int minDepth(TreeNode* root) {
        int level =1 , mx = INT_MAX; 
       helper( root, level , mx);
        return mx;
    }
};
