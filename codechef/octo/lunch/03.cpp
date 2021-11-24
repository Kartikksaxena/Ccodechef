#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long int i,n,max=0,r,q,s,min=1000000000,k,p;
    cin>>n>>k>>p;
    long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
            r=i;
        }
        if(a[i]<min)
        {
            min=a[i];
            q=i;
        }
    }
   if((k%2)==1)
     {
        if(p==0)
        s=r;
        else
        s=q;
    }
    else
    {
        if(p==0)
            {
            if(r>q)
                s=r-1;
            else
                s=r+1;
            }
        else
        {
            if(r>q)
                s=q+1;
            else
                s=q-1;
        }
    }
    cout<<a[s]<<endl;
    }
return 0;
}
