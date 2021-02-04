class Solution {
public:
    int get_min(const vector<int> &A)
    {
    int n = A.size()-1;
    long mid, left = 0, right = A.size()-1;
    while( left <= right)
    {
        if(A[0] <= A[n])
            return 0;
        mid = (left + right) /2;
        //cout<<left<<" "<<mid<<" "<<right<<" ";
        if( (mid < right && A[mid] > A[mid+1]))
            return mid+1;
        if( (A[mid] <= A[ (mid+n -1) % n ]) && (A[mid] <= A[ ( mid +1) % n ]) )
            return mid;
        else if( A[mid] >= A[left] )
            left = mid +1;
        else
            right = mid-1;
    }
    return -1;
}
    int binaryse(vector<int>& A, int left,int right,int k )
    {
        int mid;
        while(left <= right)
        {
            mid = left + ( right-left) /2;
            if(A[mid] == k)
                return mid;
            else if ( A[mid] > k )
                right = mid -1;
            else
                left = mid + 1;
        }
        return -1;
    }
    int search(vector<int>& A, int target) {

        int mn = get_min(A);
        int x = binaryse(A, 0, mn-1 ,target) ; 
        if( x != -1)
            return x;
            
        return binaryse(A , mn , A.size()-1 ,target);
        
    }
};
