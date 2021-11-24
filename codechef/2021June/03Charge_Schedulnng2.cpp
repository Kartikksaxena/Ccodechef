#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int d,intrvl,p,q;
        cin>>d>>intrvl>>p>>q;
        cout<< (d*p) <<"  "<< ((intrvl*q)*(d/intrvl -1)*(d/intrvl))/2 <<" "<<(d%intrvl)*q*(d/intrvl)<<endl; 
        long long cost = (d*p) + ((d*q)*(d/intrvl -1)*(d/intrvl))/2 +(d%intrvl)*q*(d/intrvl); 
        cout<<cost<<endl;
    }
    return 0;
}
// cost = dp + d(p+q) + d(p+2q) + ....+ d(p+ (D/d-1)q)   + (D%d)(p+ (D/d)q)
// cost = D*p + dq(1+2+3+.....(D/d-1))+ (D%d)(D/d)q

#include<bits/stdc++.h>
using namespace std;
vector<int> TtoCharg;
bool comp(pair<int,int> &a,pair<int,int>& b)
{
    if(TtoCharg[a.first]==TtoCharg[b.first])
    {
        return (TtoCharg[a.second]<TtoCharg[b.second]);
    }
    return TtoCharg[a.first]<TtoCharg[b.first];
}
int main() {
    int q;
    cin>>q;
    vector<vector<vector<int>>> anss;
    while(q--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> TminTostart;
        vector<vector<int>> ans;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            TtoCharg.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            cin>>x;
            x -= TtoCharg[i];
            TminTostart.push_back(make_pair(i,x));
        }
        //sort decreasing with TminTostart and add
        sort(TminTostart.begin(),TminTostart.end(),comp);
        long sum=0;
        for(int i=0;i<n;i++)
        {
            if(TminTostart[i].second >sum)
            {
                vector<int> res;
                res.push_back(TminTostart[i].first+1);
                res.push_back(sum);
                sum +=TtoCharg[TminTostart[i].first];
                res.push_back(sum);
                ans.push_back(res);
            }
        }
        anss.push_back(ans);
        TtoCharg.clear();
        // cout<<"\n"<<sum;
    }
    for(auto pr:anss)
    {
        cout<<pr.size()<<endl;
        for(auto pr1:pr)
        {
            for(auto pr2:pr1)
                cout<<pr2<<" ";
            cout<<endl;
        }
    }
	return 0;
}