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
            if(i<(n-k))
            {
                if((a[i]+j)%2==0)
                    coun++;
            }else
            {
                if(a[i]=='H')
                    ch++;
            }
        }
        cout<<ch<<" "<<coun<<" ";
        if(ch%2==0)
            cout<<coun<<endl;
        else
            cout<<(n-k-coun)<<endl;
    }
    return 0;
}
