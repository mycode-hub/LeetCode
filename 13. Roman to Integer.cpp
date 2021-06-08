class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L']=  50;
        m['C'] = 100;
        m['D']=  500;
        m['M'] = 1000;
        int prev = -1, ans = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            int x = m[s[i]];
            if( x >= prev)
            {
                ans += x;
                prev = x;
            }
            else
            {
                ans -= x;
            }

        }
        return ans;
        

    }
};
