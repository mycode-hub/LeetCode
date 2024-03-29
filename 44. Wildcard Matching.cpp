#define ll long long 
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
        int n= s.length() , m = p.length();
        if (m == 0)
            return (n == 0);
        int dp[n+1][m+1];
        dp[0][0] = 0;
        for (int j = 1; j <= m; j++)
            if (p[j - 1] == '*')
                dp[0][j] = dp[0][j - 1];
        for (int i = 1; i <= n; i++)
        {
            dp[i][0] = 0;
        }
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {     
                
                if(s[i-1] == p[j-1] || p[j-1] == '?')
                    dp[i][j] = dp[i-1][j-1];
                else if( p[j-1] == '*')
                    dp[i][j] = dp[i][j-1] || dp[i-1][j];
                else
                    dp[i][j] = 0;
                
            }
            
        }
        return dp[n][m];
    }
};
