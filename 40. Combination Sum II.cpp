class Solution {
public:
    void backtrack(vector<int> &cand,  int target,vector<int> &temp, vector<vector<int>> &result, int begin)
    {
        if(target < 0 )
            return;
        if(target == 0)
        {
            result.push_back(temp);
        }
        for(int i=begin; i< cand.size(); i++ )
        {
            temp.push_back(cand[i] );
            backtrack(cand, target - cand[i] ,temp,result,i+1 );
            temp.pop_back();
            // we don't need to put the same element at current positition
            while( i< cand.size()-1 && cand[i] == cand[i+1])
                i++;
        }
     }
      
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> result;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target ,temp,result,0 );
        return result;
    }
};
