#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,ch=0;
        cin>>n;
        int a[n],kk[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            kk[i]=i;
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(kk[i]==i);
            else
                ch++;
            cout<<kk[i]<<" "<<i<<" "<<a[i]<<" "<<ch<<endl;
        }

    }
return 0;

}
