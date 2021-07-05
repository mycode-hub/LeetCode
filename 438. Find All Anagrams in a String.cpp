class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map <char , int> m;
        for(auto c : p)
            m[c]++;
        int i,count = m.size();
        for( i =0 ; i < p.size(); i++)
        {
            if(m.find(s[i]) != m.end())
            {
                m[s[i]] --;
                if( m[s[i]] == 0 )
                    count --;
            }
        }
       vector <int> ans;
        if( count == 0)
            ans.push_back(0);
        int j= i;
        i=0;
        while( j < s.size())
        {
            
            if(m.find(s[i]) != m.end())
            {
                m[s[i]]++;
                 if( m[s[i]] == 1 )
                    count ++;
            }
            i++;
            if(m.find(s[j]) != m.end())
            {
                m[s[j]]--;
                 if( m[s[j]] == 0 )
                    count --;
            }
            if( count == 0 )
                ans.push_back(i);
            j++;
        }
        return ans;
    }
};
