/*Given a collection of distinct integers, return all possible permutations.

Example:

Input: [1,2,3]
Output:
[
  [1,2,3],
  [1,3,2],
  [2,1,3],
  [2,3,1],
  [3,1,2],
  [3,2,1]
 
]*/


class Solution {
public:
    void p (vector<vector<int>> &ans , vector<int> &A,int l ,int n)
    {
        if(l==n)
        {
           
            ans.push_back(A);
        }
        if(l< n)
        {
            for(int i=l;i<=n;i++)
            {
                swap(A[l],A[i]);
                p(ans,A,l+1,n);
                swap(A[l],A[i]);
                
            }
        }
    }
    vector<vector<int>> permute(vector<int>& A) {
        
        vector<vector<int>> ans;
        p(ans, A, 0 , A.size()-1);
        return ans;
    }
};
