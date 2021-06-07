/*Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

Example:

Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& A) {
        sort(A.begin(),A.end());
        vector<vector<int>> b;
       
        for(int i=0;i<A.size();i++)
        {
           if(i>0 && A[i]==A[i-1])
                continue;
            int j=i+1,k=A.size()-1;
            while(j<k)
            {
                
                int sum=A[i]+A[j] +A[k];
                
                if(sum>0)
                    k--;
                else 
                if(sum <0) 
                    j++;
                else
                {
                    b.push_back({A[i],A[j],A[k]});
                    while(j<k && A[j]==A[j+1])
                    j++;
                    while(j<k && A[k]==A[k-1])
                    k--;
                    j++;
                    
                }
                      
            }          
            
        }
        return b;
        
    }
};
