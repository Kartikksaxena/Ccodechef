//correct hai
#include<bits/stdc++.h>
using namespace std;
int almir(long long n,long long k)
{
if(k%2==1)
    return 1;
    return 2;
}
int jafar(long long n,long long k)
{
    if(k%2==1)
    return 1;
    return 2;
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int  n,k,p,mi=1000000001,mx=-1,x;
        cin>>n>>k>>p;
        vector<int> v;

        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
            if(x>mx)
                mx=x;
            if(x<mi)
                mi=x;
        }

        if(!p)
        {
        int z=jafar(n,k);
        if(z==1)
            cout<<mx<<endl;
        else
        {
        int m1=max(v[1],v[n-2]),m2=-1;
        for(int i=1;i<=n-2;i++)
        {
            int qq=min(v[i-1],v[i+1]);
            if(qq>m2)
                m2=qq;
        }
        cout<<max(m1,m2)<<endl;
        }
        }
        else
        {
        int z=almir(n,k);
        if(z==1)
            cout<<mi<<endl;
        else
        {
        int m1=min(v[1],v[n-2]),m2=1000000001;
        for(int i=1;i<=n-2;i++)
        {
            int qq=max(v[i-1],v[i+1]);
            if(qq<m2)
                m2=qq;
        }
        cout<<min(m1,m2)<<endl;
        }

        }
    }
}
