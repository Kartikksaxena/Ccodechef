#include <iostream>
#include<stack>
#include<map>
#include<algorithm>
using namespace std;
map<pair<int,int>,pair<int,int>> mp;

int solve(string &t)
{
    stack<pair<int,pair<int,int>>> st;
    // stack<pair<char,int>> st;
    
    for(int i=0;i<t.size();i++)
    {
        if(t[i]==')')
        {
            pair<int,pair<int,int>> newpr,pr1 = st.top();
            st.pop();
            pair<int,pair<int,int>> pr2 = st.top();
            st.pop();
            pair<int,pair<int,int>> pr3 = st.top();
            st.pop();
            int maxx,minn;
            if(t[pr2.first]=='+')
            {
                maxx = pr1.second.first + pr3.second.first;
                minn = pr1.second.second + pr3.second.second;
                newpr = make_pair(st.top().first ,make_pair(maxx,minn));
            }
            else
            {
                maxx = pr3.second.first - pr1.second.second;
                minn = pr3.second.second - pr1.second.first;
                newpr = make_pair(st.top().first,make_pair(maxx,minn));
            }
            st.pop();
            st.push(newpr);
            // cout<<i<<" "<<pr3.first<<" "<<st.top().first<<" "<<t[pr1.first]<<" "<<pr1.second.first<<" "<<pr1.second.second<<" "<<t[pr3.first]<<" "<<pr3.second.first<<" "<<pr3.second.second<<" "<<maxx<<" "<<minn<<endl;
            mp[make_pair(pr3.first-1,i)] = make_pair(maxx,minn);
        }else if(t[i]=='?')
        {
            st.push(make_pair(i,make_pair(1,0)));
            mp[{i,i}]=make_pair(1,0);
        }
        else 
            st.push(make_pair(i,make_pair(0,0)));
    }
    mp[make_pair(0,t.size()-1)] = st.top().second;
    return st.top().second.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        mp.clear();
        string t;
        cin>>t;
        int x = solve(t);
        int q,l,r;
        cin>>q;
        while(q--)
        {
            cin>>l>>r;
            cout<<mp[make_pair(l-1,r-1)].first<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// 4
// (?+?)
// 2
// 2 2
// 1 5
// (?-(?-?))
// 2
// 1 9
// 4 8
// (?-(?+?))
// 1
// 1 9
// (((?-(?-?))-(?-(?-?)))+((?-(?-?))-(?-(?-?))))
// 2
// 1 45
// 2 224
// (?+?)
// 2
// 2 2
// 1 5
// (?-(?-?))
// 2
// 1 9
// 4 8
// (?-(?+?))
// 1
// 1 9
// (((?-(?-?))-(?-(?-?)))+((?-(?-?))-(?-(?-?))))
// 2
// 1 45
// 2 22