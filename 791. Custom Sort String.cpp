class Solution {
public:
    string customSortString(string order, string str) {
        map<char, int> m;
        for(auto c  : str)
            m[c]++;
        string ans;
        for(auto c : order)
        {
            if( m.find(c) != m.end() )
            {
                int cnt = m[c];
                while(cnt  > 0 )
                {
                    ans += c;
                    cnt--;
                } 
                m[c] =0 ;
            }
                //cout<<x.first<<" "<<x.second<<endl;
        }
        for(auto x: m) 
        {
            while( x.second > 0 )
            {
                ans += x.first;
                x.second --;
            }
        }
        return ans;
    }
};
