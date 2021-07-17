class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int product = 1,n=a.size();
        vector<int> ans( n ,1);
        int temp=a[0];
        for(int i=1;i<n;i++)
        {
            ans[i]=temp;
            temp*=a[i];
        }
        temp=a[n-1];
        for(int i=n-2; i>=0 ; i--)
        {
            ans[i]=temp*ans[i];
            temp*=a[i];
        }
        return ans;
       
    }
};
