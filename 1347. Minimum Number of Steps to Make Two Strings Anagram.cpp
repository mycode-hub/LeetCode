class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> m(26);
        for(auto c : s )
            m[c-'a']++;
        int count =0;
       
        for(auto c : t )
        {
            int pos  =  c -'a';
            if( m[pos] > 0 )
            {
                //cout<<c<<" "<<pos<<endl;
                m[pos] --;
            }
            else
                count++;
        }
        return count;
    }
};
