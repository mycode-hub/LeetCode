class Solution {
public:
    int minInsertions(string s) {
        int dp[s.length()+1][s.length()+1] , mx = 0; 
        for(int i = 0 ; i <= s.length() ; i ++ )
        {
            for(int j = 0; j <= s.length() ; j++ )
            {
                if( i== 0 || j == 0 )
                    dp[i][j] =0;
                else
                {
                    if( s[i-1] == s[s.length() -j ])
                        dp[i][j] = dp[i-1][j-1] +1 ;
                    else
                        dp[i][j] = max( dp[i-1][j], dp[i][j-1]);
                }
               // mx = max( dp[i][j] , mx);
            }
        }
       // cout<<mx;
        return s.length() - dp[s.length()][s.length()];
    }
};
