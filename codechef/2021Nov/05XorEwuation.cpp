#include <bits/stdc++.h>
using namespace std;

long long solve(vector<long long> &a,long long n)
{
    long long ans =0;
    for(int i=0;i<64;i++)
    {
        long long Xor =0;
        long long ithPower2 = (long long)1<<i;

        for(auto x:a)   Xor ^= x;

        if(i==63 && (Xor & ithPower2))   //impossible case m 1 first(from left) p aayega
            return -1;
        
        if(Xor & ithPower2) //means i is last Xor set-bit
        {
            ans += ithPower2;
            for(int j=0;j<n;j++)    a[j] += ithPower2;
            // cout<<i<<" "<<Xor<<" "<<ans<<endl;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<long long>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout<<solve(a,n)<<endl;
    }
return 0;
}
/*
13  = 0 0 0 0 1 1 0 1                                               17  = 0 0 0 1 0 0 0 1
35  = 0 0 1 0 0 0 1 1                                               39  = 0 0 1 0 0 1 1 1
43  = 0 0 1 0 1 0 1 1                                               47  = 0 0 1 0 1 1 1 1
28  = 0 0 0 1 1 1 0 0                                               32  = 0 0 1 0 0 0 0 0
53  = 0 0 1 1 0 1 0 1   (add 4 as 2 placeholder p count(1) is odd ) 57  = 0 0 1 1 1 0 0 1

1) first find xor of all [Ai] and then 
*/