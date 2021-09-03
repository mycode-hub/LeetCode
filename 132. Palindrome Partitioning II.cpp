class Solution {
public:
    vector<vector<int>> dp1;
    bool palindrome( string &A, int i, int j)
    {
        if( dp1[i][j] != -1 )
            return dp1[i][j];
        if( i == j )
            return true;
        while( i < j )
        {
            if ( A[i] != A[j] )
                return dp1[i][j] = false;
            i++;
            j--;
        }
        return dp1[i][j] = true;
    }
    int minpart( string &A, int i, int j,  vector<vector<int> > &dp)
    {
        
        // cout<<i <<" "<<j;
        if( i >= j )
            return 0 ;
        if( dp[i][j] != -1 )
            return dp[i][j];
        //cout<<"here";
        if( palindrome( A, i,  j))
            return dp[i][j] = 0;
                
        int mn = INT_MAX;
        for(int k = i ; k < j ; k ++ )
        {
            if(palindrome(A,i,k))
            {
                dp[i][k] = 0 ;
                int t2 = minpart(A, k+1, j, dp) +1;
                mn = min ( mn , t2);
            }
            
        }
        return dp[i][j] = mn ;
    }
    int minCut(string s) {
       
        int i = 0 , j = s.length()-1;
        vector<vector<int> > dp( s.length()+1, vector<int>( s.length()+1 , -1)) ;
        dp1.resize(s.size(),vector<int> (s.size(),-1));

        // cout<<A.length();
        //memset( dp, -1 , sizeof(dp));
        
        return minpart( s, i , j , dp);
    }
};
