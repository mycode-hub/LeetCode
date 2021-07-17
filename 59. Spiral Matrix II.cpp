class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        int m = n; // no of colums
        int p = 0, q =0 ,k=0;
        vector<vector<int>> ans(n , vector<int>( n, 0 ));
        while( p < n && q < m)
        {
            for(int i = q; i <  m; i++)
                ans[p][i] = ++k;
            p++;
            for(int i = p; i <= n-1; i++)
                ans[i][m-1] = ++k;
            m--;
            if(p < n )
            for(int i=m-1; i >=q; i --)
                ans[n-1][i] = ++k;
            n--;
            if( q<m)
            for(int i= n-1 ; i >=p; i --)
                ans[i][q]= ++k;
            q++;
        }
        return ans;
    }
};
