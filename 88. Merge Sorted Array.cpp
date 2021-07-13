class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
  
        int j = n-1;
        int k = m-1, i;
        for( i = n+m-1; k >= 0 && j >=0;i-- )
        {
            if( nums2[k] > nums1[j] )
            {
                nums1[i] = nums2[k--];
            }
            else
                nums1[i] = nums1[j--];
        }
        while( k >= 0 )
            nums1[i--] = nums2[k--];
        
    }
};
