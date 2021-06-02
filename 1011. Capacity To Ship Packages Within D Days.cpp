class Solution {
public:
    bool  isfeasible(int x , vector<int> weights , int days)
    {
        int sum = 0 , cnt =1 ;
        for( auto w : weights)
        {
            if( sum + w <= x )
                sum += w;
            else
            {
                cnt++;
                sum = w;
            }
            
        }
        //cout<<cnt <<" ";
        if( cnt <= days)
            return true;
        else
            return false;
    }
    int maximum(vector<int>  &w)
    {
        int mx = INT_MIN;
        for(auto x : w) 
            mx = max( mx, x);
        return mx;
    }
    int sum(vector<int> & w)
    {
        int sum=0;
        for( auto x : w)
            sum += x;
        return sum;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        //sort(weights.begin(), weights.end());
        int l = maximum(weights);
        int ans = 0;
        long h = sum(weights);
        while( l <= h )
        {
            long mid = (l +h )/2;
            if( isfeasible(mid, weights,days)  )
            {
              //  cout<<mid <<endl;
                ans = mid;
                h = mid -1;
            }
            else
            {
                //cout<< mid <<" false"<<endl;
                l = mid +1;
            }
        }
        return ans;
    }
};
