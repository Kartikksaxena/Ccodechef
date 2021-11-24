#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n,coun=0,ch=0,k;
        cin>>n>>k;
        int a[n];
        char c;
        for(i=0;i<n;i++)
        {
            cin>>c;
            if(c=='H')
                a[i]=0;
            else
                a[i]=1;
        }
        for(i=n-1,j=1;i>=0;i--,j++)
        {
            cout<<a[i]<<" ";
            if(i>(n-k-1))
            {
                if(a[i]==0)
                    coun++;
                else
                {
                    if(coun%2==1)
                        coun++;
                }
            }else
            {
                if(a[i]==0)
                    ch++;
            }
        //cout<<ch<<" "<<coun<<endl;
        }
        if(coun%2==0)
            cout<<ch<<endl;
        else
            cout<<(n-k-ch)<<endl;
    }
    return 0;
}
