#include<iostream>
using namespace std;
#define ll long long int
ll cnt;
int check_palindrome(int c[][],int d,int e,int s)
{
if((c[d+s][e]==c[d-s][e]) && (c[d][e+s]==c[d][e-s]))
    {
        cnt++;
        s++;
        check_palindrome(c,i,j,s);
    }
return 0;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    cnt=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            {
                s=0;
                check_palindrome(a,i,j,s);
            }
    cout<<cnt;
}
return 0;
}
