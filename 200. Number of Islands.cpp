
class Solution {
public:
    void dfs(int i , int j , vector<vector<char>>& grid )
    {
        if( i >= 0 && i < grid.size() && j>=0  && j<grid[0].size() && grid[i][j] =='1')
        {
           // cout<<"here";
            grid[i][j] = '0';
            dfs(i+1, j, grid);
            dfs(i-1, j, grid);
            dfs(i, j+1, grid);
            dfs(i, j-1, grid);
        }
    }
    
    int numIslands(vector<vector<char>>& grid){
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for (int  i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if( grid[i][j] == '1')
                {
                    count++;
                    dfs(i,j,grid);
                }
            }
            
        }
        //  for (int  i = 0; i < m; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout<<grid[i][j];
        //     }
        //      cout<<endl;
        //  }
        return count;
        
    }
};
