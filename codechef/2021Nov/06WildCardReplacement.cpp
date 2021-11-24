#include <bits/stdc++.h>
using namespace std;
map<pair<int,int>,pair<int,int>> mp;

pair<int,int> solve(string t,int i,int j)
{
    if(i==j)
        return make_pair(1,0);
    
    for(int k=i;k<j;k++)
    {
        if(t[k]=='(')
            countup++;
        else if(t[k]==')')
            countup--;
        else if(t[k]=='?')
            continue;
        else if(countup==0)
        {
            pair<int,int> left,right;
            left = solve(t,i+1,k-1) ;
            right = solve(t,k+1,j-1);
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
            return mp[{i,j}] = make_pair(maxx,minn);
        }
    }
}

int main()
{
    string t;
    cin>>t;
    pair<int,int> pd = solve(t,0,t.size());
    cout<<pd.first<<" "<<pd.second<<endl;
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