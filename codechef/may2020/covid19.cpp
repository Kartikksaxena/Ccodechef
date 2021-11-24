#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,k,l;
        cin>>n;
        int maxx=0,maxxx=n,minn=0;
        int a[n];
        for(i=1;i<=n;i++)
            cin>>a[i];
        //sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            k=0;l=0;
            if((a[i+1]-a[i])>2)
            {
                k++;
                while(a[i+1]-a[i]>2)
                {
                    cout<<"d "<<k<<" "<<i<<" "<<endl;
                    k++;
                    i++;
                }
                if(k>minn)
                    minn=k;
                if(k<maxxx)
                    maxxx=k;
                cout<<maxx<<" "<<minn<<" "<<maxxx<<endl;
            }
            if((a[i+1]-a[i])<=2)
            {
                l++;
                while(a[i+1]-a[i]<=2)
                {
                    cout<<"s "<<l<<" "<<i<<" "<<endl;
                    l++;
                    i++;
                }
                if(l>maxx)
                    maxx=l;
            }
            cout<<maxx<<" "<<minn<<" "<<maxxx<<endl;
        }
        //cout<<maxx<<" "<<minn<<endl;
    }
}
