#define ll long long 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void backtrack(vector<int> &cand,  int target,vector<int> &temp, vector< vector<int>> &result, int begin)
    {
        if(target < 0 )
            return;
        if(target == 0)
        {
            result.push_back(temp);
        }
        for(int i= begin; i< cand.size(); i++ )
        {
            temp.push_back(cand[i] );
            backtrack(cand, target - cand[i] ,temp,result,i );
            temp.pop_back();
        }
    } 
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        backtrack(candidates,target,temp, result,0);
        return result;

    }
};
