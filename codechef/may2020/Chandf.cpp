\
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int x,y,l,r,z=0,s=0;
        cin>>x>>y>>l>>r;
        int i=0;
        while((x || y))
        {
            z+=(x&1 || y&1)*pow(2,i);
            x>>=1;
            y>>=1;
            i++;
            cout<<z<<" ";
        }
        cout<<endl;
        if(z>r)
        {
            s=z;
            r=z-r;
            int a=r;
            int i=0,flag=0;
            while(r)
            {
                if(r&1)
                    if(!(s&1))
                        flag=1;
                cout<<s<<" "<<r<<" "<<(s&1)<<" "<<(r&1)<<" "<<flag<<" "<<i<<endl;
                s>>=1;
                r>>=1;
                i++;
            }
            if(flag==0)
                z=z-a;
            else
            {
                while(!(s&1))
                {
                   s>>=1;
                   i++;
                }
                z=z-pow(2,i);
            }
            cout<<z<<" ";
        }
        else if(z<l)
        {

        }
    }
    return 0;
}

