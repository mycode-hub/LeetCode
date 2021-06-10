//jump game 2 return no of jumps
#define ll long long 
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        if( nums.size() <=1 )
                return 0;
        pair <int,int> interval= {0,0};
        int jumps = 0, can_reach = 0;
        while( true)
        {
            jumps++;

            for(int i = interval.first ; i <= interval.second ; i++)
            {
                can_reach = max(can_reach , i+nums[i]);
                if( can_reach >= nums.size() -1 )
                    return jumps;
            }
            if(can_reach <= interval.second )
                return -1;
            interval = { interval.second+1, can_reach };
        }
    }
};
