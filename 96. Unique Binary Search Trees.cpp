class Solution {
public:
    int numTrees(int n) {
        // catakan number
        long m = 2 * n;
        long ans = 1;
        for(int i = 0;i < n ; i++)
        {
            ans = ( ans *( m-i)) /(i+1);
        }
        return ans/(n+1);
        
    }
};
