#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int i,s=0,j,n,q;
        cin>>n>>q;
        long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            int l=0,r=0;
            for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                if(j<i)
                    l++;
                else
                    r++;
            }
        }
        s=s+(l*(k-1)*k/2)+(r*k*(k+1)/2);
    }
    cout<<s<<endl;
    }
return 0;
}
