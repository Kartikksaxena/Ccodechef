#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,z;
        cin>>n>>x;
        map<int,int> mp,mp1;
        for(int i=0;i<n;i++)
        {
            cin>>z;
            mp[z]++;
            mp1[z]++;
            int y = z^x;
            if(y !=z)
                mp[y]++;
        }
        int maxx = INT_MIN;
        z=INT_MAX;
        for(auto pr:mp)
        {
            if(pr.second >=maxx)
            {
                maxx = pr.second;
                if(pr.second==maxx)
                    z = min(z,pr.second - mp1[pr.first]);
                else
                    z = pr.second - mp1[pr.first];
            }
        }
        cout<<maxx<<" "<<z<<endl;
    }
return 0;
}
//  maxx freq  with min operation
// first store mp1 -  freq of element  ,, mp - freq of elem after xor _Manager_operation