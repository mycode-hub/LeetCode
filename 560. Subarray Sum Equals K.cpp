class Solution {
public:
    int subarraySum(vector<int>& A, int k) {
        int  j=0, sum=0, count =0 ;
        map<int, int> m ;
        
        while( j < A.size() )
        { 
            sum += A[j];
           
            if( sum == k )
                count++;
            if( m.find(sum - k) != m.end())
                count += m[sum-k];           
            m[sum] ++ ;
            j++;
        }
        
        return count;
    }
};
