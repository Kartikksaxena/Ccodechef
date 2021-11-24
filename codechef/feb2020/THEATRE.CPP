#include<bits/stdc++.h>
using namespace std;
long long int calc_profit(int i,int j,int k,int l)
{
    long long int p=0;
    int c[4];
    c[0]=i;
    c[1]=j;
    c[2]=k;
    c[3]=l;
    sort(c,c+4);
    for(int z=3;z>=0;z--)
    {
        if(c[z]==0)
        {
           p-=100;
        }else{
        p+= (c[z]*25*(z+1));
        }
    }
return p;
}
int main(){
 int t;
 long long int coun=0;
 cin>>t;
 while(t--)
 {
     int n,i,j,k,l,m;
     long long int s,mas=-400;
     char c;
     cin>>n;
     int a[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
     for(i=0;i<n;i++)
     {
        cin>>c>>m;
        a[c-65][m/3-1]++;
     }
     for(i=0;i<4;i++)
     {
        for(j=0;j<4;j++)
        {
            if(j!=i){
            for(k=0;k<4;k++)
            {
                if((k!=j)&&(k!=i)){
                s=calc_profit(a[0][i],a[1][j],a[2][k],a[3][6-i-j-k]);
                mas= (s>mas)?s:mas;
                }
            }
            }
        }
      }
      cout<<mas<<endl;
      coun+=mas;
 }
 cout<<coun;
}
