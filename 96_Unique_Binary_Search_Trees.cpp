class Solution {
public:
    long long ncr(long long n, long long k)
    {
        // since nCr is same as nCr-1
        if( k > n-k)
            k = n-k;
        if( k == 0)
            return 1;
        long long res=1;
        for(int i=0; i < k ; i ++ )
        {
            res *=   (n-i);
            res /= (i+1);
        }
        return res;
    }
    int numTrees(int n) {
        long long ans  = ncr(2*n,n);
	    return (ans/(n+1) );
    }
};
