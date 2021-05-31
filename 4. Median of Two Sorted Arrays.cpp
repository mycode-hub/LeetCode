class Solution {
public:
    double avg( double a, double b)
    {
        return (a+b)/2;
    }
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n1 = a.size() ,  n2 = b.size();
        // always make second vector to be of more length.
        if ( n1 > n2)
            return findMedianSortedArrays(b,a);
        int high = n1;
        int low  = 0;
        while(low <= high)
        {
            int partx = (low + high)/2;
            int party = (n1+ n2 +1 )/2 - partx;
            //if partitionX is 0 it means nothing is there on left side. Use -INF for maxLeftX
            //if partitionX is length of input then there is nothing on right side. Use +INF for minRightX
            int maxleftx =( partx == 0) ? INT_MIN : a[partx-1] ;
            int minrightx = ( partx == n1) ? INT_MAX : a[partx ] ;

            int maxlefty =( party == 0) ? INT_MIN : b[party-1] ;
            int minrighty = ( party == n2 )? INT_MAX : b[party ] ;
            if( maxleftx <= minrighty &&  minrightx >= maxlefty )
            {
                //We have partitioned array at correct place
                // Now get max of left elements and min of right elements to get the median in case of even length combined array size
                // or get max of left for odd length combined array size.

                if( (n1 + n2) %2 == 0)
                    return avg( max(maxleftx, maxlefty), min(minrightx, minrighty));
                else
                    return (double) max( maxleftx , maxlefty);
                
            }
            else if ( maxleftx > minrighty ) 
                high = partx - 1;
            else
                low = partx + 1;

        }
        return -1;
    }
};
