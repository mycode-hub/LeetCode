#define ll long long 
class Solution {
public:
    bool isfeasible1( ll mid, int m, int n, int k)
    {
        int count  = 0 ;
        for(int i = 1; i<=m; i++ )
        {
            // for each low find the number of elements smaller than mid value;
            count += min((int)mid/i,n );
            if( count >= k)
                return true;
        }
        return false;
    }
    int findKthNumber(int m, int n, int k) {
        ll low = 1;
        int high = m * n ; 
        ll ans  = 0;
        while( low <= high )
        {
            ll mid = ( high + low ) / 2;
            if( isfeasible1( mid, m , n, k))
            {
                ans = mid;
                high = mid -1;
            }
            else
                low = mid +1;
        }
        return ans;
    }
};
