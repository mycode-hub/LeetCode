class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& A) {
        int m= A.size() , n =A[0].size();
        long long dp[m][n];
        
        //column initialization
        for(int i=n-1; i >=0 ; i-- )
        {
            if( A[m-1][i] == 0 )
                dp[m-1][i] = 1;
            else
            {
                while(i >=0  )
                    dp[m-1][i--] = 0 ;
                
            }
        }
        
        for(int i = m-1 ; i >= 0 ; i--)
        {
            if( A[i][n-1] == 0 )
                dp[i][n-1] =1;
            else
            {
                while(i >=0 )
                   dp[i--][n-1] = 0 ;
                
            }
        }
        for(int i=m-2 ; i >= 0 ; i-- )
        {
            for(int j = n-2 ; j >= 0 ; j--)
            {
                dp[i][j] = 0 ;
                if(A[i][j] == 0 )
                    dp[i][j] = dp[i+1][j] + dp[i][j+1];
            }
        }
        return dp[0][0];
    }
};  
