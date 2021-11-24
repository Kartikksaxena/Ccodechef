#include<bits/stdc++.h>
using namespace std;
void binary_r(unsigned int n)
{
    unsigned i;
    for(i=1<<40;i>=1;i/=2)
    {
        if(n&i)
            cout<<("1");
        else
            cout<<("0");
    }
    cout<<endl;
}
int main()
{
    unsigned int t;
    cin>>t;
    while(t--)
    {
        unsigned int a,b,L,i,r,maxx=0,z;
        cin>>a>>b>>L>>r;
        binary_r(a);
        binary_r(b);
        binary_r(r);
        binary_r(L);
        for(i=40;i>=0;i--)
        {
            unsigned int c=(a&i);
            unsigned int d=(b&i);
            if((c*d)>maxx)
            {
                binary_r(i);
                maxx=c*d;
                z=i;
            cout<<i<<" "<<c<<" "<<d<<" "<<c*d<<" "<<z<<" "<<maxx<<endl;
            }
        }
        cout<<z;
    }
    return 0;
}

