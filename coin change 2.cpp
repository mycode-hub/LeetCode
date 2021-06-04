//refernce : https://trykv.medium.com/how-to-solve-minimum-coin-change-f96a758ccade
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int * a = new int[amount+1]();
        a[0]=1;
        //for each coin, we will check whether that amount can be made or not
        for(int i=0 ; i < coins.size();i++)
        {
            // tranverse the amount 
            for (int j = 1; j <= amount; j++)
            {
                if( j >= coins[i])
                {
                    a[j] += a[ j-coins[i] ];
                }
            }
            
        }
        return a[amount];
    }
};
