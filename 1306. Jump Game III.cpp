class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        /* at each node we can traverse to right or left of current node value */
        // dfs approach 
        if( (start < 0 || start >= arr.size()) || arr[start] < 0) 
            return false;
        if(arr[start] == 0 )
            return true;
        // marking as visited 
        arr[start] = - arr[start];
    
        return canReach(arr, start - arr[start] ) || canReach(arr, start + arr[start] ) ;


    }
};
