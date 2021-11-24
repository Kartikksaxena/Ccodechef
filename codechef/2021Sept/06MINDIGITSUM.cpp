/*
if l<=n<=r  (return n)
if n<l<=r  (return l)

if(l<r<n)  tb taamjhaam  if(n%i)==0  && l<=n/i<=r 
*/
#include <bits/stdc++.h>
using namespace std;
int SumDigitBase(int x,int base)
{
    int sum=0;
    while(x)
    {
        sum += x%base;
        x/= base;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,r;
        cin>>n>>l>>r;
        if(r>=n)
        {
            if(l>n)
                cout<<l<<endl;
            else
                cout<<n<<endl;
            break;
        }
        int minn = INT_MAX,base=0;

        for(int i=l;i<=r;i++)
        {
            int k= SumDigitBase(n,i);
            // cout<<k<<" "<<minn<<"   ";
            if(minn >= k)
            {
                minn = k;
                base=i;
            }
        }
        cout<<base<<endl;
    }
return 0;
}
