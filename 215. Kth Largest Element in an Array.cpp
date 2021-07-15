class Solution {
public:
    int partition(vector<int>& A ,int l , int r )
    {
        int i = l-1, pivot = A[r];
        
        for(int j = l ; j < r; j++)
        {
            if( A[j] > pivot)
            {
                i++;
                swap(A[i] , A[j]);
            }
            
        }
        swap(A[++i] , A[r]);
        return  i;
    }
    int quickselect( vector<int>& nums, int l, int r, int k)
    {
        if( l > r)
            return INT_MAX;
        int pos = partition( nums, l,r);
        if( pos +1 == k)
            return nums[pos];
        else if( pos+1 > k )
        {
            return quickselect(nums, l, pos-1 , k );
        }
        return quickselect(nums, pos+1, r, k );
    }
    int findKthLargest(vector<int>& nums, int k) {
        return quickselect(nums, 0 , nums.size() -1 , k);
    }
};
