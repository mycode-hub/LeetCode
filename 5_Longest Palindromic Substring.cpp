https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    int countSubstrings(string s) {
        if(  s.length() < 1 ) 
            return 0;
        
        int low = 0,start = 0;
        int high = 0;
        int count=0 ,n=s.length();
        for(int i=0;i<n ;i ++ )
        {
            //checking even length pallindrome 
            high = i;
            low= i-1;
            //cout<<"1 ";
            while(low >= 0 && high < s.length() && s[low] == s[high])
            {
               // cout<<s.substr(low, high -low +1)<<" ";
                low--;
                high++;
                count++;
            }
            //checking for odd length pallindrome 
            high = i;
            low = i;
            //cout<<"2 "; 
            while(low >= 0 && high < s.length() && s[low] == s[high])
            {
                //cout<<s.substr(low, high -low +1)<<" ";
                low--;
                high++;
                count++;
            }
            //cout<<endl;
            
        }
        return count;
    }
};
