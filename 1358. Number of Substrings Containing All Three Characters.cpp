class Solution {
public:
    int numberOfSubstrings(string A) {
        int i= 0, j=0;
		int count = 0 , mx = 0;
        map<char, int> m;
        
        while (j < A.length())	
        {
            m[A[j]]++;
            if( m[A[j]] == 1 )
                count++;
            while(count == 3  )
            {
               mx += A.length() - j ; 
               m[A[i]]--;
                if(m[A[i]] == 0 )
                    count--;
                i++;
            }
            j++;
        }
        
		return  mx;
    }
};
