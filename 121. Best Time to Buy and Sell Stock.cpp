class Solution {
public:
    int maxProfit(vector<int>& a) {
        int profit = 0, mx = a[a.size() -1];
        for(int i = a.size()-2 ; i >=0 ; i--)
        {
            mx = max( a[i] , mx);
            profit = max( profit, mx -a[i]);
        }
        return profit;
    }
};
