#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int max_2=0,min_2=8,s=0;
        int a[n+1];
        a[n]=27;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            int k=0;
            if(a[i+1]-a[i]<3)
            {
                while(a[i+1]-a[i]<3 && i<n-1)
                {
                    k++;
                    //cout<<k<<" "<<a[i]<<" "<<a[i+1]-a[i]<<endl;
                    i++;
                }
                i--;
                if(k>max_2)
                    max_2=k;
                if(k<min_2)
                    min_2=k;
            }
            else
            {
                int spc=0;
                while(a[i+1]-a[i]>2 && i<n-1)
                {
                    spc++;
                    //cout<<s<<" "<<spc<<" "<<a[i]<<" "<<i<<" "<<a[i+1]-a[i]<<endl;
                    i++;
                }
                i--;
                if(spc>s)
                    s=spc;
                //cout<<s<<" "<<spc<<endl;
            }
        }
        if(s>1)
            min_2=s;
        if(s==1 && n==2)
            min_2=0;

            cout<<min_2+1<<" "<<max_2 + 1<<endl;
    }
}
