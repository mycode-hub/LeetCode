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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector <int> > ans;
        if( !root)
            return ans;
        queue <TreeNode*> q;
        stack <vector<int>>s ;
        q.push(root);
        while( ! q.empty())
        {  
            int sz = q.size();
            vector<int> x;
            for(int i =0; i <sz ; i ++)
            {
                TreeNode* temp= (q.front());
                x.push_back(temp->val);
                q.pop();
                if( temp->left)
                    q.push(temp -> left);
                if( temp->right)
                    q.push(temp -> right);
            }
            s.push(x);            
        }
       
        while( ! s.empty() )
        {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};
