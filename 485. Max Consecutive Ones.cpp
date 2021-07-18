class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& A) {
        int i = 0, j =0, mx =0, n= A.size() ;
        while( i < n )
        {
            if( A[i] == 1 )
            {
                j = i+1;
                while( j < n && A[j] ==1)
                    j++;
                mx = max( mx, j-i);
                i = j-1;
            }
            i++;
        }
        return mx;
    }
};
