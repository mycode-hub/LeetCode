
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> s;
        for(auto x: nums)
            s.insert(x);
        int mx = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            //  if element is first element of sequence
            if( s.find( nums[i] - 1) == s.end())
            {
                // check for all the consecutive numbers
                int j = nums[i]+1;
                while(s.find(j) != s.end() )
                    j++;
                mx = max(mx, ( j-nums[i]));
            }
        }
        return mx;
        // maximum time taken will be O(2n)
    }
};
