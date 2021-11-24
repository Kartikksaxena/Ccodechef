#include <iostream>
using namespace std;

int main()
{
     int t;
    cin>>t;
    while(t--)
    {
        int n,m,q,i,j,k=0;
        int o=0;
        int l=0;
        cin>>n>>m;
        int ar[n+1][m+1]={0};
        int a[n+1]={0};
        int b[n+1]={0};
        cin>>q;
        while(q--)
        {
            cin>>i;
            a[i]++;
            cin>>j;
            b[j]++;
        }
        for(i=1;i<=n;i++)
            o+=a[i]%2;
        for(j=1;j<=m;j++)
            l+=b[j]%2;
            //cout<<o<<l;
        k = (l*(n-o))+(o*(m-l));
            cout<<k<< endl;
    }
	return 0;
}
