#include <iostream>
using namespace std;
int main()
{
    long int t,i;
     int g,l;
    cin>>t;
    while(t--)
    {
        long int n,k,m,temp=0;
        cin>>n>>k;
        int a[10000];
        for(i=0;i<n;i++)
            cin>>a[i];
        g=(k/n)%3;
        cout<<"  "<<g;
        if(g==0)
        g+=3;
        l=k%n;
        cout<<"  "<<g<<"  "<<l;
            if((k<=(n/2))&& (n%2)!=0)
                temp=a[n/2];
            for(m=1;m<=g;m++)
                for(i=0;i<n;i++)
                a[i]=(a[i]^a[n-(i)-1]);
            for(i=0;i<l;i++)
            a[i]=(a[i]^a[n-(i)-1]);
            if((k<=(n/2))&& (n%2)!=0)
                a[n/2]=temp;
         for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        }
        return 0;
}
