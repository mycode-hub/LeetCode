// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/
#define ll long long
int maxLen(int A[], int n)
{
    unordered_map<int ,int> m;
    int sum = 0 ;
    long long count=0;
    int len = 0;
    for(int i = 0; i < n ; i++ )
    {
        sum += A[i];
        if( sum == 0 )
        {
            len = max(len, i+1);
        }
        if( m.find(sum) != m.end())
        {
            len = max( len, i - m[sum]);
        }
        else
            m[sum] = i;
    }
    return len;
}
