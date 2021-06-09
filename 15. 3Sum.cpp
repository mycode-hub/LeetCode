class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& A) {
        sort( A.begin() , A.end() );
        int n = A.size();
        vector<vector<int>> ans;
        for(int i =0 ;i < n; i++)
        {
            if( i > 0 && A[i] == A[i-1 ])
            {
                continue;
            }
            int j = i+1;
            int k = n-1;
            while( j< k)
            {
                int front = A[i]; 
                int sum = A[i] + A[j] +A[k];
                if( sum > 0 )
                    k--;
                else if( sum < 0 )
                    j++;
                else
                {
                    ans.push_back( {A[i],A[j],A[k]});
                    while( j< k && A[j] ==A[j+1])
                        j++;
                    while( j< k && A[k] ==A[k-1])
                        k--;
                    j++;
                }

            }
           
        }
        return ans;
    }
};
