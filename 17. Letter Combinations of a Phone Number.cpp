class Solution {
public:
    void generate(string str , int pos , string &digits, vector<string> &s, vector<string> &res )
    {
        if(str.length() == digits.length())
        {
            res.push_back(str);
            return;
        }
        int ind = (digits[pos] - '0') -2;
        
        for(int i = 0 ; i < s[ind].length(); i++)
        {
            generate(str+s[ind][i] , pos+1 , digits, s, res);
        }
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string>  res;
        if( digits.length() <= 0)
            return res;
        vector<string> s = {"abc", "def", "ghi" , "jkl", "mno", "pqrs", "tuv", "wxyz" };
        
        string str = "";
        generate( str,0 ,digits, s, res);
        return res;
    }
};
