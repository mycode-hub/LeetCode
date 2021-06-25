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
    TreeNode *prev = new TreeNode(INT_MIN),*first =NULL, *second =NULL ;
    void helper( TreeNode* root )
    {
         if (! root )
            return;
        helper(root->left);
        if( root->val < prev ->val  )
        {
            if( first == NULL )
            {
               // cout<< "dsfsd";
              first = prev;
            }
            second = root;
        }
        prev = root;
        helper(root->right); 
    }
    void recoverTree(TreeNode* root) {
        helper(root);
       
        int temp = first->val;
        first ->val = second->val;
        second -> val =temp;
    }
};
