#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,even=0,odd=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2)
                odd++;
            else
                even++;
        }
        int maxx = min(n/2 + n%2,even) + min(n/2,odd);
        cout<<maxx<<endl; 
    }
return 0;
}