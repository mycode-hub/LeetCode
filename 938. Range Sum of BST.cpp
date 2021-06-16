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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int l =0, h=0, total =  0;
        if( !root)
            return 0;
        if( root-> val >= low)
            l = rangeSumBST(root->left,low, high);
        if( root -> val >= low && root->val <= high)
            total = root->val;
        if( root -> val <= high)
             h = rangeSumBST(root->right,low, high);
        total += l +h;
        return total;
    }
};
