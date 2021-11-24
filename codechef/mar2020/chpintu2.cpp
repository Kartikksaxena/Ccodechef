#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int m,i,n,mini=100000;
        cin>>n>>m;
        long int a[n]={0};
        long int b[m]={0};
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            long int ch;
            cin>>ch;
            b[a[i]-1]+=ch;
        }
        for(i=0;i<m;i++)
        {
         if(b[i]<mini && b[i]!=0)
            mini=b[i];
        }
        if(mini==100000)
            cout<<"0"<<endl;
        else
            cout<<mini<<endl;
    }
}
