class Solution {
public:
    vector<int> temp;
    
    void allpermuation( vector<int>& nums,  vector<vector<int>> &res, vector<bool> &chosen )
    {
        if( temp.size() == nums.size() )
        {
            res.push_back(temp);
            return;
        }
        for(int i=0; i <nums.size(); i++)
        {
            if( chosen[i] == true || ( i> 0 && nums[i-1] == nums[i]  && /*if i-1 element has been chosen previsouly then we can choose the repeated element*/ chosen[i-1] == false ) )      // if already taken in any of previous loction do not take  again
                continue;
            chosen[i] = true;
            temp.push_back(nums[i]);
            allpermuation(nums, res, chosen);
            temp.pop_back();
            chosen[i] = false;        
            
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<bool> chosen(nums.size());
        vector<vector<int>> res;
        allpermuation(nums, res, chosen);
        return res;
    }
};
