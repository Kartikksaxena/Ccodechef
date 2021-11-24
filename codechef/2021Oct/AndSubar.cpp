#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long lastsetBit=1;
        cin>>n;
        while(lastsetBit<n)
            lastsetBit = lastsetBit<<1;
        // cout<<lastsetBit<<" ";
        if(n==1)
            cout<<"1"<<endl;
        else if(n==lastsetBit)
            cout<<n/2<<endl;
        else
        {
            int a = n+1 - lastsetBit/2;
            int b = lastsetBit/2 - lastsetBit/4;
            // cout<<a <<"s"<<b<<" ";
            cout<<max(a,b)<<endl;
        }
    }
return 0;
}

//  ex for n=17 max Subarray would be [8,9,10,11,12,13,14,15]  n ki [16,17]