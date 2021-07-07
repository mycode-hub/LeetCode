class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int dp[n+1][m+1];
        memset(dp, 0 , sizeof(int)*(m+1)*(n+1));
        int mx = INT_MIN;
        for(int i = 1;i <= n;i++)
        {
            for(int j = 1; j<=m; j++)
            {
                if( nums1[i-1] == nums2[j-1])
                    dp[i][j] = dp[i-1][j-1] +1;
                mx = max( dp[i][j] , mx);
            }
        }
        return mx;
        
    }
};
