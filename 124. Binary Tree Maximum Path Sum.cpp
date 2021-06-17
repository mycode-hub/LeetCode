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
    int helper(TreeNode *root, int & ans)
    {
        if( !root)
            return 0;
        int l = helper(root->left, ans);
        int r = helper(root->right, ans);
        if( l <= 0 )
            l =0;
        if( r <0 )
            r = 0;
        ans = max( ans, l+r+root->val);
        return root->val + max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        int ans =INT_MIN;
        helper(root, ans);
        return ans;
    }
};
