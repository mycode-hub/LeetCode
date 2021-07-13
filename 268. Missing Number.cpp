class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long sum2=0 , sum = n * ( n+1 )/ 2;
        
        for(auto x: nums)
            sum2 += x;
        return sum - sum2;
    }
};
