#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long d,intrvl,p,q;
        cin>>d>>intrvl>>p>>q;
        long long cost= (d*p) + ((intrvl*q)*(d/intrvl -1)*(d/intrvl))/2 + (d%intrvl)*q*(d/intrvl); //all var must be long because int d*q overflow
        cout<<cost<<endl;
    }
    return 0;
}
// cost = dp + d(p+q) + d(p+2q) + ....+ d(p+ (D/d-1)q)   + (D%d)(p+ (D/d)q)
// cost = D*p + dq(1+2+3+.....(D/d-1))+ (D%d)(D/d)q