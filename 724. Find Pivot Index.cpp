class Solution {
public:
    int pivotIndex(vector<int>& A) {
         
        long long sum = 0, n= A.size();
        for(int i=0 ; i < n ; i++ )
        {
            sum += A[i];
        }
        long long leftsum = 0;
        for(int i= 0 ; i < n ;i++)
        {
         //   cout<<( sum - A[i]- leftsum)<<" ";
            if( leftsum == ( sum - A[i]- leftsum))
                return i;
            else
                leftsum += A[i];
        }
        
        return -1;
    }
};
