class Solution {
public:
    vector<int> grayCode(int n) {
            
        vector<int> ans={0};
        int num = 1 <<n;
        for(int i = 1;i < num; i++)
        {
            ans.push_back(i ^ ( i >>1 ));
        }
        return ans;
        
    }
};
