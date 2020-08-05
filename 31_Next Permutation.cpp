/* Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

The replacement must be in-place and use only constant extra memory.

Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.

1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1 */


class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int n=A.size();
        int i=n-2;
        while(i>-1)
        {
            if(A[i] < A[i+1])
                break;
            i--;
        }
        if(i<0)
            reverse(A.begin(),A.end());
        else
        {
            int l;
            for ( l = n - 1; l > i; l--) {
                if (A[l] > A[i]) {
                    break;
                }
            } 
            swap(A[i],A[l]);
            for(int j=i+1;j<n;j++)
                cout<<A[j];
            reverse(A.begin()+i+1,A.end());
            
        }
    }
};
