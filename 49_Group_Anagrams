class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map< string  ,int > m;
        vector< vector <string >> v;
        
        int n = strs.size();
        int k =0 ;
        for(int i=0; i <n ; i++)
        {
            string s = strs[i];
            sort(s.begin() ,s.end());
            if( m.find(s) == m.end() )
            {
                m[s] = k;
               
                v.push_back( { strs[i] });
                k++;
            }
            else
            {
                v[m[s]].push_back(strs[i]);
            }
        }
        return v;
        
    }
};
