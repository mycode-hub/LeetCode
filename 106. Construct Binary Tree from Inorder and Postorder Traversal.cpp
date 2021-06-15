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
    TreeNode * helperfuction(vector<int>& preorder, vector<int>& inorder, int left, int right, int &prestart)
    {
        // node can have 0 left and greater than 0 right children aand voce versa
        if( left > right)
            return NULL;
        if( left == right)
        {
            // only one node no children
            TreeNode * root = new TreeNode( preorder[prestart++]);
            return root;
        }
        int x = preorder[prestart];
        int i =0;
        for ( i = left; i <= right; i++)
        {
            if( inorder[i] == x )
                break;
        }
        
        TreeNode * root = new TreeNode( preorder[prestart++]);
        
        root->left = helperfuction(preorder, inorder, left , i-1, prestart);
        root->right  = helperfuction(preorder, inorder, i+1 , right,prestart);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int prestart = 0 ;
        int n = preorder.size()-1;
        return helperfuction(preorder,inorder,0,n,prestart );
    }
};
