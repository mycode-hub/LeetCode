/* 
You have one chocolate bar that consists of some chunks. Each chunk has its own sweetness given by the array sweetness.

You want to share the chocolate with your K friends so you start cutting the chocolate bar into K+1 pieces using K cuts, each piece consists of some consecutive chunks.

Being generous, you will eat the piece with the minimum total sweetness and give the other pieces to your friends.

Find the maximum total sweetness of the piece you can get by cutting the chocolate bar optimally.

 

Example 1:

Input: sweetness = [1,2,3,4,5,6,7,8,9], K = 5
Output: 6
Explanation: You can divide the chocolate to [1,2,3], [4,5], [6], [7], [8], [9]
Example 2:

Input: sweetness = [5,6,7,8,9,1,2,3,4], K = 8
Output: 1
Explanation: There is only one way to cut the bar into 9 pieces.
Example 3:

Input: sweetness = [1,2,2,1,2,2,1,2,2], K = 2
Output: 5
Explanation: You can divide the chocolate to [1,2,2], [1,2,2], [1,2,2]
 

Constraints:

0 <= K < sweetness.length <= 10^4
1 <= sweetness[i] <= 10^5 */

class Solution {
public:
    int minimum(vector<int> &w)
    {
        int mx = INT_MAX;
        for( auto x : w)
            mx = min(mx,x);
        return mx;
    }
    int sum(vector<int> & w)
    {
        int sum=0;
        for( auto x : w)
            sum += x;
        return sum;
    }
    int isfeasible(vector<int> nums ,int mid , int k )
    {
        int i =0,sum = 0, cnt =0 ; 
        while( i < nums.size()) 
        {
            sum += nums[i];
            if( sum >= mid )
            {
                //cout<<sum << " "<<k<<endl;
                // one partition
                sum =0;
                k--;
            }
            if( k <= 0)
                return true;
            i++;
        }
        if( k > 0 )
            return false;
        return true;
    }
    
    int maximizeSweetness(vector<int>& nums, int k) {
        long l = minimum(nums);
        int ans = 0;
        long h = sum(nums);
       // cout<<isfeasible( nums, 7, k+1);
        while( l <= h )
        {
            long mid = (l +h )/2;
            if( isfeasible( nums, mid, k+1)  )
            {
               //cout<<mid <<endl;
                ans = mid;
                l = mid + 1;
            }
            else
            {
                //cout<< mid <<" false"<<endl;
                h = mid -1;
            }
        }
        return ans;
        
    }
};
