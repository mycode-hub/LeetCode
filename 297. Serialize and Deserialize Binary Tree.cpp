/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include<sstream>
class Codec {
public:
    void helper(TreeNode* root , stringstream &out )
    {
        if( !root)
        {
            out<<"x ";
            return;
        }
        out<< root->val<<" ";
        helper(root->left, out);
        helper(root->right, out);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        stringstream out;
        helper(root, out);
        cout<<out.str();
        return out.str();
    }
    TreeNode* helper2( stringstream &in)
    {
        string val;
        in>> val;
        if( val== "x")
            return NULL;
        TreeNode* root = new TreeNode(stoi(val));
        
        root->left= helper2(in);
        root->right = helper2(in);
        return root;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
       stringstream in(data);
        return helper2(in);
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
