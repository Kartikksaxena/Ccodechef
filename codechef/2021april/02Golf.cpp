#include <bits/stdc++.h>
using namespace std;
int main() {
    /*
    from forward goaled if(x%k==0)

    for backward ball will be goaled if(x%k==n%k)

    */

    //for fast input and output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,x,k;
        cin>>n>>x>>k;
        if(x%k==0 || x%k==(n+1)%k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;    
    }
    return 0;
}
