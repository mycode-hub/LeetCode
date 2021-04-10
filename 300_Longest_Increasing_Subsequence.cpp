class Solution {
public:
    int lengthOfLIS(vector<int>& A){
        int n= A.size();
        int *dp = new int[n]();
        dp[0]  =1;
        int mx = 1;
        for( int i = 1 ; i < n; i ++)
        {
            dp[i]= 1;
            for(int j=0 ; j<i;j++)
            {
                if(A[i] > A[j] )
                    dp[i] = max( dp[i], dp[j] + 1);
            }
            mx = max(dp[i],mx);
        }
        return mx;
    }
};
