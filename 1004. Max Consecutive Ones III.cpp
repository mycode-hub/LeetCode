class Solution {
public:
    int longestOnes(vector<int>& A, int k) {
        int i= 0, j=0;
		int count = 0 , mx = INT_MIN;
		while (i < A.size())	
		{
			if( A[i] == 0 )
				count++;
			if( count > k && j < A.size()  )
			{
				if( A[j] == 0 )
					count--;
				j++;
			}
			mx = max( mx, i-j+1);
            i++;
		}
		return mx== INT_MIN ? 0 : mx;

		
    }
};
