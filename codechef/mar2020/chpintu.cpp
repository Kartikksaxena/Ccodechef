#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,ch,min=10000,sel;
        cin>>n>>m;
        int f[n];
        int g[m+1]={0};
        for(int i=0;i<n;i++)
            cin>>f[i];
        for(int i=0;i<n;i++)
        {
            cin>>ch;
            g[f[i]-1]+=ch;
            //if(g[f[i]-1]==0 || g[f[i]-1]>ch)
              //  g[f[i]-1]=ch;
        }
        for(int i=0;i<m;i++)
        {
          if(g[i]<min && g[i]!=0)
          {
              min=g[i];
              sel=i;
          }
        }
        cout<<g[sel]<<endl;
    }
    return 0;
}
