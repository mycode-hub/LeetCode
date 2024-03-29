class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        if( intervals.size() <= 0 )
            return true;
        sort(intervals.begin(), intervals.end());           // will sort all the inputs according to first column
        for(int i = 0; i < intervals.size() -1 ; i++ )
        {
            if( intervals[i][1] > intervals[i+1][0])
                return false;
        }
        return true;
    }
};
