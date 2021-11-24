#include<iostream>
using namespace std;
int divisor(long long int p,long long int q)
{
    if(q%p==0)
    {
       // cout<<"YES";
        return 1;
    }
return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,m;
        cin>>a>>m;
        long long int k,L;
        long long int j=0;
        long long int b[100];
        k=m%a;
        L=m/a;
        if(k!=0)
        {
        while(L>1)
        {
         //   cout<<k<<" "<<L<<" ";
            if(divisor(k,L))
            {
                j+=1;
                b[j]=L;
            }
           // cout<<j<<" "<<b[j]<<"\n";
            k+=a;
            L--;
        }
        }
        cout<<j<<"\n";
        for(int i=j;i>0;i--)
            cout<<b[i]<<" ";
        if(t!=1)
        cout<<"\n";
    }
    return 0;
}
