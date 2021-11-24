#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i=0,j,n,s;
        cin>>n;
        int a[10]={0};
        int b;
        while(n--)
        {
            cin>>b;
            for(j=9;j>=0;j--)
            {
                s=a[j]^(b%10);
                a[j]=s;
                b/=10;
            }
        }
        for(j=0;j<10;j++)
            if(a[j]==1)
            i++;
        cout<<i<<endl;
    }
return 0;
}
