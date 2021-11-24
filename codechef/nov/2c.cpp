#include<iostream>
using namespace std;
int a[129];
int find(int a[],int n,int x)
{
for(int i=n;i>0;i--)
    if(a[i]==x)
        return i;
return 0;
}
void sequence()
{
int i,j,k;
a[1]=0;
a[2]=0;
for(i=2;i<129;i++)
{
    j=find(a,i-1,a[i]);
    if(j!=0)
        a[i+1]=i-j;
    else
        a[i+1]=0;
}
}
int counta(int n)
{
    int count=0;
        while(1)
        {
            if(a[n+1]==0)
                return 1;
            else
            {
                return(1+counta(n-a[n+1]));
            }
        }
return 0;
}
int main()
{
    int t;
    cin>>t;
    sequence();
    while(t--)
    {
        int n;
        cin>>n;
        int j=counta(n);
        cout<<j<<endl;
    }
return 0;
}
