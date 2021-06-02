// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long l= 1 , h = n ,ans=0;
        while(l <= h)
        {
            long mid = ( l+h)/2;
            if( isBadVersion(mid))
            {
                ans = mid;
                h = mid-1;
            }
            else
            {
                l = mid + 1;
            }
                
        }
        return ans;
    } 
};
