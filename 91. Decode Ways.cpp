class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        if( s[0] == '0')
            return 0;
        int *dp = new int[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i = 2; i <= n ; i ++ )
        {
            dp[i]=0;
            if( s[i-1] != '0' )
            {
                dp[i] = dp[i-1];
            
            }
          
            string st =s.substr(i-2,2);
            if(  st >= "10" && st <= "26")
                dp[i] += dp[i-2];
        }
        return dp[n];
    }
};
