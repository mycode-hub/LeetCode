class Solution {
public:
	static bool compare( const pair<int,int> a, const pair<int,int> b )
	{
		return a.second > b.second;
	}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m ; 
        for( auto x : nums)
            m[x]++;
        vector< pair< int, int> > v(m.begin() , m.end());
        sort(v.begin() , v.end(), compare);
		vector<int> ans;
		for( int i = 0 ; i < k ;i ++)
		{
			ans.push_back(v[i].first);
		}
		return ans;

    }
};
