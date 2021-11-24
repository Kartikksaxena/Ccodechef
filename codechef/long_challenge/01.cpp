#include<iostream>
using namespace std;

int main()
{
 int c,f,x,y,j,k,p,i;
 cin>>c>>f;
 int a[c+1][c+1]={100001};
 for(i=1;i<=c;c++)
    a[i][i]=0;
 for(i=0;i<f;i++)
 {
     cin>>x>>y>>p;
     a[x][y]=p;
     a[y][x]=p;
 }
 for(i=0;i<c;i++)
    for(j=0;j<c;j++)
    {
        for(k=0;k<c;k++)
            if(a[i][k]+a[k][j] <a[i][j])
                {
                    a[i][j]=a[i][k]+a[k][j];
                    cout<<a[i][j]<<" ";
                }
    cout<<a[i][j]<<" ";
    }
    return 0;
}
