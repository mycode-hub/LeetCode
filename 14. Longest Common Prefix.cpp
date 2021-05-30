class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        int n =strs.size();
        int count = INT_MAX;
        for(int i=1; i<n ;i++)
        {
            string t= strs[i];
            int j = 0;
            while( j < t.length())
            {
                if(s[j] != t[j] )
                    break;
                j++;
            }
            count = min( j, count);
        }
        if(!count )
            return "";
        return s.substr(0,count);
    }
};
