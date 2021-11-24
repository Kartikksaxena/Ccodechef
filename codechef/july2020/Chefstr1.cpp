#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    long int n,d=0;
    cin>>n;
    long int a,s[n];
    cin>>s[0];
    for(int i=1;i<n;i++)
    {
        cin>>s[i];
        d+=(s[i]>s[i-1]) ? (s[i] - s[i-1] -1) : (s[i-1] - s[i] -1);

    }
    cout<<d<<endl;
}
return 0;
}
