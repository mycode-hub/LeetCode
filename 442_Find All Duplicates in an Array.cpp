/* Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.

Could you do it without extra space and in O(n) runtime?

Example:
Input:
[4,3,2,7,8,2,3,1]

Output:
[2,3] */

class Solution {
public:
    vector<int> findDuplicates(vector<int>& A) {
        int n=A.size();
        vector<int>  ans;
        if(n==0)
            return ans;
        for(int i=0;i<n;i++)
        {
            int x=A[i]<0 ? (A[i]*(-1)-1) : A[i]-1;
            if(A[x] <0 ) 
                ans.push_back(x+1);
            else
                A[x]*=-1;
        }

       
        return ans;
        
        
    }
};
