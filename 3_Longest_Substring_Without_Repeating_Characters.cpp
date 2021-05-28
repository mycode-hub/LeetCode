class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> a(256,-1);
        int i  = 0, j = 0, n= s.length() , res = 0; 
        if(n <=1 )
            return n;
        while(j < n)
        {
            char pos = s[j];
            if( a[pos] != -1 && a[pos] >= i  )                     // if character has already come current window
            {
                //cout<<j<<endl;
                i = a[pos]+1;
            }    
            a [ pos] = j;
            res = max(res, j - i +1);
            j++;
        }
        return res;
    }
};
