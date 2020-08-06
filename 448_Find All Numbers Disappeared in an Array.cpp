/* Easy

2984

253

Add to List


Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements of [1, n] inclusive that do not appear in this array.

Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.

Example:

Input:
[4,3,2,7,8,2,3,1]

Output:
[5,6] */

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& A) {
        int n=A.size();
        vector<int>  ans;
        for(int i=0;i<n;i++)
        {
            int x=A[i]<0 ? (A[i]*(-1)-1) : A[i]-1;
            if(A[x] < 0 )
                continue;
            else
                A[x]*=-1;
        }
        for(int i=0;i<n;i++)
        {
            if(A[i]>0)
                ans.push_back(i+1);
        }   
        return ans;
    }
};
