#include<iostream>
using namespace std;
long long int b;
long long int mini(long long int a[],long long int l)
{
    long long int minn=10000000001;
    long long int j=1000000001;
    for(long long int i=1;i<=l;i++)
    {
        if(a[i]<minn)
        {
            minn=a[i];
            j=i;
        }
    }
return j;
}
long long int token(long long int a[],long long int l,long long int s,long long int b)
{
    if(l>0)
    {
    long long int i=mini(a,l);
    //cout<<a[i]<<" "<<i<<" "<<l<<" "<<s<<" "<<b<<" "<<a[l];
    if((a[i]-s)>0)
    {
        b+=(a[i]-s)*l;
        s=a[i];
        //cout<<" "<<s<<" "<<b<<"\n";
        b = token(a,i-1,s,b);
    }
    }
return b;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    long long int n;
    cin>>n;
    long long int a[n+1];
    for(long long int i=1;i<n+1;i++)
        cin>>a[i];
    long long int s=0;
    b=0;
   long long int t= token(a,n,s,b);
    cout<<t<<"\n";
}
return 0;
}
