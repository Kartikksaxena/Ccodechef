#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[2];
        int n,sum=0;
        cin>>n>>arr[0]>>arr[1];
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
            sum += arr[s[i]-'0'];
        cout<<sum<<endl;
    }
return 0;
}