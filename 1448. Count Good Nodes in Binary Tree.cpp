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
    void helper(TreeNode* root, int mini, int &count)
    {
        if(!root)
            return;
        if(root->val >= mini)
            count++;
        mini = max( root->val, mini);
        helper(root->left, mini, count);
        helper(root->right, mini, count);
    }
    int goodNodes(TreeNode* root) {
        int count=0;
        helper(root, INT_MIN, count);
        return count;
    }
};
