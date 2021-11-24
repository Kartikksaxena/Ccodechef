#include <iostream>
using namespace std;
int main()
{
    long int t,i;
     int g=0,l;
    cin>>t;
    while(t--)
    {
        long int n,k,m;
        cin>>n>>k;
        int a[10000];
        for(i=0;i<n;i++)
            cin>>a[i];
        g=(k/n)%3;
        if(g==0)
        {
            g+=3;
        }
            cout<<"    "<<g;
        l=k%n;
            if((n>k)&& (n%2)==1)
                a[n/2]=a[n/2];
            for(m=1;m<=g;m++)
                for(i=0;i<n;i++)
                a[i]=(a[i]^a[n-(i)-1]);
            for(i=0;i<l;i++)
            a[i]=(a[i]^a[n-(i)-1]);
         for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        }
        return 0;
}
