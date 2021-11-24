#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        bool flag=true;
        cin>>n;
        map<int,int> mp;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
            if(mp[x]>2)
                flag=false;
        }
        auto itr = mp.rbegin();
        if(itr->second >1)
            flag=false;
        if(flag)
        {
            for(auto pr:mp)
            {
                if(pr.second >1)
                {
                    a.push_back(pr.first);
                    pr.second--;
                }
            }
            auto itr = mp.end();
            do{
                itr--;
                a.push_back(itr->first);
            }while(itr!=mp.begin());
            for(int i=0;i<a.size();i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
	// your code goes here
	return 0;
}