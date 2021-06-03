#define ll long long
#define mod 1000000007
#include<bits/stdc++.h>
class Solution {
public:
    int maximum(vector<int>  &A)
    {
        int mx = INT_MIN;
        for (int  i = 0; i < A.size()-1; i++)
        {
            mx = max(mx,abs(A[i] - A[i+1]));
        }
        return mx;
    }
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin() , horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        ll hx = INT_MIN, n = horizontalCuts.size();
        hx = max ( abs (0-horizontalCuts[0]), max( maximum(horizontalCuts), abs(h-horizontalCuts[n-1])) );
        ll vx = INT_MIN , m = verticalCuts.size();
        vx = max( abs(0-verticalCuts[0]) , max( abs(verticalCuts[m-1]-w), maximum(verticalCuts) ));
        ll ans = hx * vx;
        return ans% mod;
    }
};
