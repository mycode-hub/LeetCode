class Solution {
public:
    int distributeCandies(vector<int>& v) {
        map<int, int> m;
        for(auto  x: v)
            m[x]++;
         return min( m.size() , v.size()/2);
    }
};
