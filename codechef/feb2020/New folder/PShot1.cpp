#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int i,n,a=0,b=0;
    cin>>n;
    string c;
    cin>>c;
    int d=n;
    int e=n;
    for(i=0;i<2*n;i++)
    {
        if(i%2==0)
        {
            d--;
            a+=(c[i]-48);
        }
        else
        {
            e--;
            b+=(c[i]-48);
        }
        cout<<a<<" "<<b<<" "<<(a-b)<<" "<<e<<" "<<d<<" "<<i<<endl;
        if((a>b) && ((a-b)>e))
        {
            i++;
            break;
        }
        if((b>a) && ((b-a)>d))
        {
            i++;
            break;
        }
    }
    cout<<i<<endl;
}
}
