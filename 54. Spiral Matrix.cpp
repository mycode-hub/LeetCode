class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
       int  n = a.size(); // no of rows;
        int m = a[0].size(); // no of colums
        int p = 0, q =0 ;
        vector<int> ans;
        while( p < n && q < m)
        {
            for(int i = q; i <  m; i++)
                ans.push_back(a[p][i]);
            p++;
            for(int i = p; i <= n-1; i++)
                ans.push_back(a[i][m-1]);
            m--;
            if(p < n )
            for(int i=m-1; i >=q; i --)
                ans.push_back(a[n-1][i]);
            n--;
            if( q<m)
            for(int i= n-1 ; i >=p; i --)
                ans.push_back(a[i][q]);
            q++;
        }
        return ans;
    }
};
