#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,p,i,odd=0,even=0;
        cin>>n>>q;
        long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            int count=0;
            //count no of ones in a[i]
            while(a[i])
            {
                count+=(a[i]&1);
                a[i]>>=1;
            }
            //cout<<count<<"  s ";
            if(count%2==0)
                even++;
            else odd++;

        }
        for(i=0;i<q;i++)
        {
            int cnt=0;
            cin>>p;
            while(p)
            {
                cnt+=(p&1);
                p>>=1;
            }
            if(cnt%2==0)
                cout<<even<<" "<<odd<<endl;
            else
                cout<<odd<<" "<<even<<endl;
        }

    }
return 0;
}
