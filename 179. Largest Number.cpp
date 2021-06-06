class Solution {
public:
    static bool comp ( int a , int b)
    {
       string s = to_string(a);
       string d = to_string(b);

        return (s+d) > (d+s);
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end(), comp);
        if(nums[0] == 0)
            return "0";
        string ans="";
        for(auto x : nums)
            ans += to_string(x);
        
        return ans;
    }
};
