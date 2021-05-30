class Solution {
public:
    bool closeStrings(string word1, string word2) {
        //if the size of two given strings are different then return false
        if(word1.size()!= word2.size())return false;
// map to store the count of each present character
        unordered_map<char,int> mp1,mp2;
        for(int i=0;i<word1.size();i++){
            mp1[word1[i]]++;
        }
//store the count of ecah character in word2 if and only if that charcter is present in
//word1 at least once
        for(int i=0;i<word2.size();i++)
        {
            if(mp1.count(word2[i])==0)// if the current charcter if not present in word1 at least once return false
                return false;
            mp2[word2[i]]++;
        }
// vector to store the count of character in map above
        vector<int> a, b;
        for(auto it =mp1.begin();it!=mp1.end(); it++){
            a.push_back(it->second);
        }
        for(auto it =mp2.begin();it!=mp2.end(); it++){
            b.push_back(it->second);
        }
//sort the vector vlaues and if the vector values in both the vector are equal after sorting
// we can surely convert the one string in other with given operations else not
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a!=b)return false ;
        return true;
    }
};
