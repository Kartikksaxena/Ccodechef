#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,m,i,j,k;
    cin>>n>>m;
    long long s=0;
    long long a[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>a[i][j];
    s+=n*m;
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<m-1;j++)
        {
            int min1,min2,min3;
            min1=min(n-1-i,m-1-j);
            min2=min(i,j);
            min3=min(min1,min2)+1;
            // k gives mac length upto which sequence can be with center a[i][j]
            for(k=1;k<min3;k++)
            {
                if(a[i][j-k]==a[i][j+k] && a[i-k][j]==a[i+k][j])
                    s++;
            }
        }
    }
    cout<<s<<endl;
}
return 0;
}
