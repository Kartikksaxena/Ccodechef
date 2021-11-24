#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n= s.size();
        vector<bool> sign(n);  //true for +,1       false for -,0
        stack<bool> st;  // to get last ( sign
        vector<int> postv(n,0),negtv(n,0);
        vector<vector<int>> half(2,vector<int> (n,0));
        bool curr = true;
        for(int i=0;i<n;i++)
        {
            if(s[i]==')')
            {
                curr = st.top();
                st.pop();
            }
            else if(s[i]=='(')
                st.push(curr);
            else if(s[i]=='-')
                curr ^= true;
            sign[i]=curr;
        }
        for(int i=1;i<n;i++)
        {
            // cout<<sign[i]<<" ";
            if(s[i]=='?')
            {
                half[sign[i]][i] +=1;
                if(sign[i])
                    postv[i] +=1;
                else
                    negtv[i] +=1;
            }
            half[0][i] += half[0][i-1];
            half[1][i] += half[1][i-1];
            postv[i] += postv[i-1];
            negtv[i] += negtv[i-1];
        }
        // cout<<endl;
        // for(int i=0;i<n;i++)
        //     cout<<postv[i]<<" ";
        // cout<<endl;
        // for(int i=0;i<n;i++)
        //     cout<<negtv[i]<<" ";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<n;j++)
                cout<<half[i][j]<<" ";
            cout<<endl;
        }
        int q;
        cin>>q;
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            l--;r--;
            if(l==r)
                cout<<"1 ";
            else
                cout<< (half[sign[r]][r]-half[sign[l]][l])<<" ";
            
        }
        cout<<endl;
        
    }
return 0;
}
/* another aproach implement yourself
        ( ( ( ? - ( ? - ? ) ) - ( ? - ( ? - ? ) ) ) + ( ( ? - ( ? - ? ) ) - ( ? - ( ? - ? ) ) ) )
curr  : + + + + - - - + + - + - - - + + + - - + - + + + + + - - - + + - + - - - + + + - - + - + +
Half + :0 0 0 1 1 1 1 1 2 2 2 2 2 2 2 2 3 3 3 3 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5 5 5 5 6 6 6 6 6 6 6
Half - :0 0 0 0 0 0 1 1 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 3 3 3 3 3 4 4 4 4 4 4 4 5 5 5 5 5 6 6 6 6 6
depends on curr sign of L and R decides value take from (half +) or (half - )    

if (s[i]==')' ) use stack and make curr sign as corresponding '(' has
if '-' flip curr sign 
if '+' no change in sign
*/