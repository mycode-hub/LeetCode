/* https://leetcode.com/problems/longest-palindromic-substring/ */ 

class Solution {
public:
    
    string longestPalindrome(string s) {
        if(  s.length() < 1 ) 
            return "";
        
        int low = 0,start = 0;
        int high = 0;
        int len = 1,n=s.length();
        for(int i=1;i<n ;i ++ )
        {
            //checking even length pallindrome 
            high = i;
            low= i-1;
            while(low >= 0 && high < s.length() && s[low] == s[high])
            {
                low--;
                high++;
            }
            if( high -low -1 > len )                    // calculating starting of string and length
            {
                len=high -low -1;
                start = low +1;
            }
            //checking for odd length pallindrome 
            high = i + 1;
            low = i-1;
            
            while(low >= 0 && high < s.length() && s[low] == s[high])
            {
                low--;
                high++;
            }
            if( high -low -1 > len )                    // calculating starting of string and length
            {
                len=high -low -1;
                start = low +1;
            }
            
        }
        return s.substr(start , len);
    }
};
