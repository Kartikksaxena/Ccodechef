#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        priority_queue<pair<int,int>> pq;
        vector<bool> v(n,0);
        long long sum=0;
        int iDivBy = 1;
        while(m--)
        {
            int x,y;
            cin>>x>>y;
            pq.push(make_pair(x,y));
        }
        while(!pq.empty() && iDivBy<=n)
        {
            pair<int,int> paiir = pq.top();
            pq.pop();
            int gcd =__gcd(iDivBy,paiir.second);
            if(gcd==paiir.second)
                continue;
            int no_with_x = (n/iDivBy) - n/(iDivBy*(paiir.second/gcd));
            sum += no_with_x * paiir.first;
            iDivBy *= (paiir.second/gcd);
            // cout<<sum<<" "<<iDivBy<<" "<<gcd<<" "<<no_with_x<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}

// ********Another approach******

while(t--)
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> pq;
    
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        pq.push_back(make_pair(x,y));
    }
    sort(pq.begin(),pq.end(),greater<pair<int,int>>());
    long gcd= 1,rem=n,ans=0;
    for(int i=0;i<pq.size() && rem>0;i++)
    {
        long a= pq[i].first,b=pq[i].second;
        gcd = gcd*b/__gcd(gcd,b);
        ans += (rem-n/gcd)*a;
        rem = n/gcd;
    }
    cout<<ans<<endl;
}