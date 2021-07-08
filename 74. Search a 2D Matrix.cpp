class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
		int n = matrix.size() ; 	//	 no of rows;
		int m = matrix[0].size(); 	// no of cols;

        int l = 0 , h = n-1, ans = -1;
		while( l <= h )
		{
			int mid = ( l+h)/2;
			if( matrix[mid][m-1] >= target)
			{
				ans = mid;
				h = mid-1;
			}
			else
			{
				l  = mid+1;
			}
		}
     
		if( ans == -1)
			return false;
		l=0 , h = m;
		while( l <= h )
		{
			int mid = ( l+h)/2;
			if( matrix[ans][mid] == target)
				return true;
			if( matrix[ans][mid] > target)
			{
				h = mid-1;
			}
			else
			{
				l  = mid+1;
			}
		}
		return false;

    }
};
