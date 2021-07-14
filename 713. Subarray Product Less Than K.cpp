class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& A, int k) {
        long long pro = 1, i=0,j=0 , cnt = 0 ;
        while( j < A.size())
        {
            pro *= A[j];
            while( i<= j && pro >= k )
            {
                pro /= A[i++];
            }
            cnt  += j- i+1;
            j++;
        }
        return cnt;
    }
};
