class Solution {
public:
    int minSubArrayLen(int target, vector<int>& A) {
        int i=0,j =0;
        int sum = 0;
        int mn = INT_MAX;
        while( j< A.size())
        {
            sum += A[j];
            while( sum >= target && i <= j )
            {
                mn = min ( mn, j-i +1);
                sum -= A[i];
                i++;
            }
            j++;
        }
        if( mn == INT_MAX)
            return 0;
        return mn;
    }
};
