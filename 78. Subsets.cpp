class Solution {
public:
    vector<vector<int>> res;
    void allsubsets( vector<int> &nums,  int i, vector<int> &temp )
    {
        if( i == nums.size() )
        {
            res.push_back(temp);
        }
        else
        {
            // not taking current element
            allsubsets(nums, i+1, temp);
            temp.push_back(nums[i]);
            //taking current elemnt 
            allsubsets(nums, i+1, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        allsubsets(nums,0,temp);
        return res;
    }
};
