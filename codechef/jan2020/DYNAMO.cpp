/*get t n A and then show random no S  then b and then rand()%(s-a-b)
smae to e

if s!=   then -1 and terminate dont depend on t*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    ll a,lens,b,c,d,e,z;
    cin>>a;
    lens = pow(10,n);
    //cout<<lens<<endl;
    cout<<(2*lens+ a)<<endl;
    cin>>b;
    cout<<(lens-b)<<endl;
    cin>>d;
    cout<<(lens-d)<<endl;
    cin>>z;
    if(z== -1)
        break;
}
return 0;
}
