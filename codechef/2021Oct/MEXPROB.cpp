#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

    }
return 0;
}
index       0   1   2        
3 4     (   1   0   2   4   6   5   9   11)       [0,2,3,1,1,0]
min         1   0   0   0   0   0   0   0
max         1   1   2   

3 2     (   2   1   3   )
            0   0   0 

3 6     (   0   1   2   )
            1   2   3