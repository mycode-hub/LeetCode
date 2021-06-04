class Solution {
public:
    int binarysearch(vector<int> &nums,int x)
    {
        long l = 0;
        int h = nums.size()-1;
        long ans = -1;
        while( l <= h )
        {
            long mid = (l +h )/2;
            if( nums[mid] >= x  )
            {
               // cout<<nums[mid] <<endl;
                ans = mid;
                h = mid -1;
            }
            else
            {
           // cout<< mid <<" false"<<endl;
                l = mid +1;
            }
        }
        if( ans!= -1 && nums[ans] != x)
            return -1;
        return ans;
    }
    int binarysearch2(vector<int> &nums,int x)
    {
        long l = 0;
        int h = nums.size()-1;
        long ans = -1;
        while( l <= h )
        {
            long mid = (l +h )/2;
            if( nums[mid] <= x  )
            {
                // cout<<mid <<endl;
                ans = mid;
                l = mid +1;
            }
            else
            {
                // cout<< mid <<" false"<<endl;
                h = mid -1;
            }
        }

        if( ans !=-1 && nums[ans] != x)
            return -1;
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {          
        vector<int> ans;
        
        if( !nums.size() )
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        
        ans.push_back(binarysearch(nums,target));
        ans.push_back(binarysearch2(nums,target));
        
        return ans;
    }
};
