#include <bits/stdc++.h>
using namespace std;
map<pair<int,int>,pair<int,int>> mp;

pair<int,int> solve(string t,int i,int j)
{
    // cout<<i<<" "<<j<<endl;
    if(i==j)
        return mp[{i,j}]=make_pair(1,0);
    if(mp.find({i,j})!=mp.end())
        return mp[{i,j}];
    int countup =0;
    for(int k=i+1;k<=j;k++)
    {
        if(countup==0 && (t[k]=='+' || t[k]=='-'))
        {
            pair<int,int> left,right;
            int maxx=0 ,minn=0;
            left = mp[{i+1,k-1}] = solve(t,i+1,k-1) ;
            right = mp[{k+1,j-1}] = solve(t,k+1,j-1);
            if(t[k]=='+')
            {
                maxx = left.first + right.first;
                minn = left.second + right.second;
            }
            else
            {
                maxx =left.first - right.second;
                minn = left.second - right.first;
            }
            // cout<<i<<" "<<j<<" "<<maxx<<" "<<minn<<endl;
            return mp[{i,j}] = make_pair(maxx,minn);
        }
        if(t[k]=='(')
            countup++;
        else if(t[k]==')')
            countup--;
        // cout<<i<<" "<<k<<" "<<j<<" "<<countup<<" "<<t[k]<<endl;
    }
}
int solve(string t)
{
    stack<int    
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string t;
        cin>>t;
        mp.clear();
        pair<int,int> pd = solve(t,0,t.size()-1);
        
        int q,l,r;
        cin>>q;
        while(q--)
        {
            cin>>l>>r;
            cout<<mp[{l-1,r-1}].first<<" ";
        }
        cout<<endl;
    }
return 0;
}

/*   either (X+Y) or (X-y)  it means string must be split into two not more than 2
            ? + ((?-(?-?))+(?-(?+?)) 
    ?                  ((?-(?-?))+(?-(?+?))    count '(' && ')' when equal then split
                    (?-(?-?))       (?-(?+?))              
                   ?     (?-?)     ?      (?+?)
(i,j)
    if(countUp == countDown+1 )    then split when op occurs

*/