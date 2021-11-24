#include <iostream>
using namespace std;

int main()
{
     int t;
    cin>>t;
    while(t--)
    {
        int n,m,q,i,j,k=0;
        cin>>n>>m;
        int ar[n+1][m+1]={0};
        int a[n+1]={0};
        int b[m+1]={0};
        cin>>q;
        while(q--)
        {
            cin>>i;
            a[i]++;
            cin>>j;
            b[j]++;
        }
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
            {
                ar[i][j]=a[i]+b[j];
                k+=ar[i][j]%2;
            }
            cout<<k<<"\n";
    }
	return 0;
}
