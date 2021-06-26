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
    vector<int> temp;
    void helper(TreeNode* root, int targetSum, vector<vector<int>>  &ans)
    {
        if( !root )
            return ;
        if(!root->left && !root->right && targetSum-root->val == 0)
        {
            ans.push_back(temp);
            return;
        }
        if( root->left ) 
        {
            temp.push_back(root->left->val);
            helper( root->left, targetSum- root->val,ans );
            temp.pop_back();
        }
        if( root->right)
        {
            temp.push_back(root->right->val);
            helper( root->right,targetSum- root->val,ans );
            temp.pop_back();
        }
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        if( !root)
            return ans;
        temp.push_back(root->val);
        helper(root, targetSum, ans);
        return ans;
    }
};
