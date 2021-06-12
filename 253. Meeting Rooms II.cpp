class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& A) {
        // sort both list in ascending order and increase for meeting room and decrease for non room;
        map<int,int> m;
        for(int i = 0; i < A.size() ; i++)
        {
            m[A[i][0]] ++;
            m[A[i][1]] --;
        }
        int mx = 0, count=0 ;
        for(auto x : m)
        {
            count += x.second;
            mx = max( mx, count);
        }
        return mx;
    }
};
