class Solution {
public:
    int maximum(vector<int>  &w)
    {
        int mx = INT_MIN;
        for(auto x : w) 
            mx = max( mx, x);
        return mx;
    }
    bool  isfeasible(int days, vector<int> & nums, int m, int k)
    {
        int bouquet = 0, flowers=0;
        for(int i=0;i<nums.size(); i++)
        {
            if(nums[i] > days)
                flowers = 0 ;
            else
            {
                flowers +=1 ;
                if( flowers == k )
                {
                    bouquet += 1;
                    flowers = 0 ;
                }
            }
            if( bouquet >= m)
                return true;
        }
        return false;
    }
    int minDays(vector<int>& nums, int m, int k) {
        int l = 1;
        int ans = -1;
        long h = maximum(nums);
        while( l <= h )
        {
            long mid = (l +h )/2;
            if( isfeasible(mid, nums,m,k)  )
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
