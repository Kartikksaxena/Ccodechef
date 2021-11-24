#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int i,n,d,a=0,b=0;
    cin>>n;
    string c;
    cin>>c;
    for(i=0;i<2*n;i++)
    {
        if(i%2==0)
            a+=(c[i]-48);
        else
            b+=(c[i]-48);
        d=(a>b)?a:b;
       // cout<<a<<" "<<b<<" "<<d<<" "<<(d+d-a-b)<<" "<<(2*n-i)/2<<endl;
        if((d+d-a-b)>(2*n-i)/2)
        {
            i++;
            break;
        }
    }
    cout<<i<<endl;
}
}
