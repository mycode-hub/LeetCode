//jump game 4
class Solution {
public:
    int minJumps(vector<int>& arr) {
        unordered_map < int, vector<int>> m;            // store indexs of current value
        int n = arr.size(); 
        for(int i =0 ;i <n; i++)
            m[arr[i]].push_back(i);
        queue <int> q;                      // store the index 
        vector<int> visited(n);
        q.push(0);        
        visited[0] = 1;
        int ans = 0;
        while(! q.empty())
        {
            int sz = q.size();
            for(int i =0 ; i < sz; i++)
            {
                int x = q.front();
                q.pop();
                if( x == n-1)
                    return ans;
                vector<int> &same_value = m[arr[x]];                // if you don;t make a refrence then it will give  TLE.
                for( auto k : same_value)
                {
                    if( !visited[k])
                    {
                        visited[k] = 1;
                        q.push(k);
                    }
                }
                if( x >0 && !visited[x-1])
                {
                    visited[x-1] = 1;
                    q.push(x-1);
                }
                if( x < n-1 && ! visited[x+1])
                {
                    visited[x+1] = 1;
                    q.push(x+1);
                }
                same_value.clear();
            }
            ans++;
        }
        return -1;
    }
};
