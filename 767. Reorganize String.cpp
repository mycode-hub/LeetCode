class Solution {
public:
    string reorganizeString(string s) {
        map<char, int> m;
        int mfc = 0;
        char ch = 'a';
        for(auto c : s)
        {
            m[c]++;
            if( mfc < m[c] )
            {
                mfc = m[c];
                ch =c;
            }
        }
        if( 2* mfc -1 > s.size() )
            return "";
        int i = 0;
        string res ( s.length(), '#');
        while(m[ch])
        {
            res[i] = ch;
            m[ch]--;
            i+=2;
        }
        for(auto x :m)
        {
            while( x.second)
            {
                if( i >=s.size())
                    i=1;
                res[i] = x.first;
                x.second--;
                i+=2;
            }
        }
        return res;
      
    }
};
