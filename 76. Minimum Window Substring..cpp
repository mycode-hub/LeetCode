class Solution {
public:
    string minWindow(string s, string t) {
        map<char ,int> m; 
        int n = s.length();
        for(auto x: t)
            m[x]++;
        int count = m.size();
        int i = 0,sz=INT_MAX, start=0;
        for(int j = 0 ; j < n ;j++)
        {
            if( m.find(s[j]) != m.end())
            {
                m[s[j]]--;
                if( m[s[j]] == 0 )
                    count--;
            }
            while( count == 0 )
            {
               
                if( sz > (j-i+1))
                {
                    sz =  j-i+1;
                    start =i;
                }
                //cout<<i<<" "<<sz<<" " <<j<<endl;
                if( m.find(s[i]) != m.end())
                {
                  //  cout<<s[i]<<" "<<m[s[i]]<<endl;
                    m[s[i]]++;
                    if( m[s[i]] == 1)
                        count++;
                //    cout<<i<<" "<<s[i]<<" "<<m[s[i]]<<" "<<count<<endl;
                }
                i++;
            }
            
        }
        if( sz == INT_MAX)
            return "";
        return s.substr(start,sz);
    }
};
