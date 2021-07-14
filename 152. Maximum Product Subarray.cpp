class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = nums[0] , mn = nums[0],  ans = nums[0];
        for(int i = 1 ; i < nums.size(); i ++ )
		{
            int temp = max(nums[i] ,max( mx * nums[i], mn * nums[i] ) );
            mn = min(nums[i] ,min( mx * nums[i], mn * nums[i] ) );
            mx = temp;
            ans = max( mx , ans);
			
		}
        return ans;
    }
};
