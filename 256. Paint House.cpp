#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCost(vector<vector<int>>& a) {
        int m = a.size() , n = a[0].size();
        int dp[m][n];
        for (int  i = 0; i < m ; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if( i == 0 )
                    dp[i][j] = a[i][j];
                else
                {
                    dp[i][j] = min(dp[i-1][ (j+1)%n ] , dp[i-1][ (j+2)%n ] ) +a[i][j];
                }
            }
        }
        int min_cost = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            min_cost = min( min_cost ,dp[m-1][i]);
        }
        
        return min_cost;

    }
};
