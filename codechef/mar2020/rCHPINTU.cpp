#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,i,ch,miin=10000,sel;
        cin>>n>>m;
        int f[n];
        int g[m];
        for(i=0;i<n;i++)
        {
            cin>>f[i];
            g[i]=-1;
        }
        for(i=0;i<n;i++)
        {
            cin>>ch;
            g[f[i]-1]+=ch;
        }
        for(i=0;i<m;i++)
        {
            cout<<g[i]<<" ";
          if(g[i]<miin && g[i]!=-1)
          {
              miin=g[i];
              sel=i;
          }
        }
        cout<<" s "<<(g[sel] +1)<<endl;
    }
    return 0;
}
