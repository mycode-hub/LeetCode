class Solution {
public:
    int minPathSum(vector<vector<int>>& A) {
        int m = A.size() , n = A[0].size();
        int dp[m][n];
        for(int i = 0 ;i < m ; i++)
        {
            for(int j =0 ; j < n ; j++)
            {
                if(i == 0 && j == 0)
                    dp[i][j] = A[i][j];
                else if( i == 0 )
                    dp[i][j] = dp[i][j-1] + A[i][j];
                else if( j == 0)
                    dp[i][j] = dp[i-1][j] + A[i][j];
                else
                    dp[i][j] = min(dp[i-1][j] , dp[i][j-1]) +A[i][j];
                //dp[i][j] = min( dp[i-1][j], dp[i][j-1]) ) +A[i-1][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};
