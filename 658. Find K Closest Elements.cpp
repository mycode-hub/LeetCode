class Solution {
public:
    vector<int> findClosestElements(vector<int>& A, int k, int x) {
        vector<int> ans;
        int n = A.size();
        int i=0;
        for(i=0; i < n ;i++)
            if( A[i] >= x)
                break;
        int j = i;
        i=i-1;
        while( i >=0 && j <A.size() && ans.size() <k)
        {
            if( (x- A[i]) <= ( A[j] - x)  )
                ans.push_back(A[i--]);
            else
                ans.push_back(A[j++]);
        }
        while( i >=0 && ans.size() <k)
            ans.push_back(A[i--]);
        while( j <n && ans.size() <k)
            ans.push_back(A[j++]);
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};
