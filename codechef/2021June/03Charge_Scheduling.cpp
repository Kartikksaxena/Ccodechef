#include<bits/stdc++.h>
using namespace std;
bool comp(pair<pair<int,int>,int> &a,pair<pair<int,int>,int> b)
{
    if(a.first.first==b.first.first)
    {
        return (a.first.second<b.first.second);
    }
    return a.first.first<b.first.first;
}
int main() {
    int q;
    cin>>q;
    vector<vector<vector<int>>> anss;
    while(q--)
    {
        int n;
        cin>>n;
        vector<pair<pair<int,int>,int>> TminTostart;
        vector<vector<int>> ans;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            TminTostart.first.first = x;
        }
        for(int i=0;i<n;i++)
        {
            cin>>x;
            x -= TtoCharg[i];
            TminTostart.first.second = x;
            TminTostart.second = i;
        }
        //sort decreasing with TminTostart and add
        sort(TminTostart.begin(),TminTostart.end(),comp);
        long sum=0;
        for(int i=0;i<n;i++)
        {
            if(TminTostart[i].first.second >sum)
            {
                vector<int> res;
                res.push_back(TminTostart[i].second+1);
                res.push_back(sum);
                sum +=TtoCharg[TminTostart[i].first];
                res.push_back(sum);
                ans.push_back(res);
            }
        }
        anss.push_back(ans);
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