class Solution {
public:
    int helper(vector<int>& A, int k)
    {
        int count  = 0 , i =0,j=0, n= A.size(), total = 0 ;
        map<int,int> m;
        while( j < n )
        {
            if( m[A[j]] == 0 )
                count++;
            m[A[j]]++;
            while( count > k )
            {
                m[A[i]]--;
                if(m[A[i]] == 0 )
                    count--;
                i++;
            } 
            total += j-i+1;
            j++;
        }
        return total;
    }
       
    int subarraysWithKDistinct(vector<int>& A, int k) {
        
        return helper(A,k) -helper(A,k-1);
    }
};
