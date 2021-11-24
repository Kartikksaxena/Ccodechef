#include<iostream>
using namespace std;
void binary_r(unsigned int n)
{
    unsigned i;
    for(i=1<<10;i>=1;i/=2)
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
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,L,i,r,maxx=0,z;
        cin>>a>>b>>L>>r;
        for(i=L;i<=r;i++)
        {
           // if(i==111 || i==127 || i==239 || i==255 || i==110 || i==126 || i==238 || i==254)
             //   continue;
            int c=(a&i);
            int d=(b&i);
            if((c*d)>maxx)
            {
                binary_r(a);
                binary_r(b);
                binary_r(i);
                binary_r(r);
                binary_r(L);
                maxx=c*d;
                z=i;

            cout<<i<<" "<<c<<" "<<d<<" "<<c*d<<" "<<z<<" "<<maxx<<endl;
            }
        }
        cout<<z;
    }
    return 0;
}
