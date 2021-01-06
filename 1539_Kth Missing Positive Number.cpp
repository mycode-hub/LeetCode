/* https://leetcode.com/problems/kth-missing-positive-number/ */
class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        int i=0;
        if(k>a[0]-1)
            k -= a[0]-1;
        else
            return k;
        while(i<a.size()-1 && k>0)
        {
            if(a[i+1]-a[i]-1 < k)
                k -= a[i+1] - a[i]-1 ;
            else
                break;
            //cout<<i<<" "<<k;
            i++;
        }
        // cout<<endl;
        // cout<<i<<" "<<a[i]<<" "<<k;
        return a[i]+k;
        
    }
};
