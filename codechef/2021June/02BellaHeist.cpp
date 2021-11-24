// cost = dp + d(p+q) + d(p+2q) + ....+ d(p+ (D/d-1)q)   + (D%d)(p+ (D/d)q)
// cost = D*p + dq(1+2+3+.....(D/d-1))+ (D%d)(D/d)q

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long d,intrvl,p,q,cost=0;
        cin>>d>>intrvl>>p>>q;
        // cout<<d<<intrvl<<p<<q<<endl;
        long x= d/intrvl;
        while(x--)
        {
            cost+= intrvl*p;
            // cout<<intrvl<<" "<<p<<" "<<q<<" "<<cost<<endl;
            p+=q;
        }
        cost+= (d%intrvl)*p;
        cout<<cost<<endl;
    }
    return 0;
}
    