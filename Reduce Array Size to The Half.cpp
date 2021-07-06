class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int , int> m;
        for(auto x: arr)
            m[x]++;
        int ans = 0, sum = 0 ;
        vector<int> v;
        for(auto [_, x ] : m )
            v.push_back(x);
        sort(v.begin(),v.end(), greater<int> ());
        for(auto x: v)
        {
            
            //cout<<x<<" ";
            sum += x;
            ans++;
            if( sum >=(arr.size()/2))
                break;
        }
        return ans;
        
    }
};
