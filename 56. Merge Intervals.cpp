class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        if( intervals.size() <= 0 )
            return ans;
        int j =0;
        ans.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++)
        {
            if( ans[j][1] >= intervals[i][0] )
                ans[j][1] = max(ans[j][1] , intervals[i][1] ) ;
            else
            {
                ans.push_back(intervals[i]);
                j++;
            }
        }
        return ans;
        
    }
};
