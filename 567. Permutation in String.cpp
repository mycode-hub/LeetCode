class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size() < s1.size())
                return false;
        map<char, int> m ;
        for( auto c: s1)
            m[c]++;
        int count = m.size();
        for(int i =0; i <s1.size(); i++)
        {
            if( m.find(s2[i]) != m.end() )
            {
                m[s2[i]]--;
                if( m[s2[i]] == 0 )
                    count--;
            }
        }
        if( count ==0 )
            return true;
        int i = 0 , j = s1.size();
        for(; j<s2.size(); j++)
        {
            if( m.find(s2[i]) != m.end() )
            {
                m[s2[i]]++;
                if( m[s2[i]] == 1 )
                    count++;
            }
            i++;
            if( m.find(s2[j]) != m.end() )
            {
                m[s2[j]]--;
                if( m[s2[j]] == 0 )
                    count--;
            }
            if( count==0 )
                return true;
        }
        return false;
        
    }
};
