class Solution {
public:
    int rob(vector<int>& a) {
        int n = a.size();
        if( n == 1 )
            return a[0];
        if( n == 2)
            return max(a[0],a[1]);
        int v1  = 0;
        int v2 = a[0];
        int max_value;
        for(int i=1 ; i< n-1 ; i++)
        {
            max_value = max ( a[i] + v1 , v2);
            v1 = v2;
            v2= max_value;
        }
        int max_value2 = 0 ;
        v1 = 0;
        v2 = a[1];
        for(int i = 2 ; i < n ; i++ )
        {
            max_value2 = max ( a[i] + v1 , v2);
            v1 = v2;
            v2= max_value2;
        }
        return max( max_value, max_value2);
    }
};
