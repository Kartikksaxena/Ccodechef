// 1995925 9     -->    1   9   9   5   9   2   5
// 434356 3

// 5
// 21       5   21
// 8        8   9
// 100      0   111
// 5925     9   6000
// 434356   3   444456  
// 8889 9       8890 ->  

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int number,i=0,d;
        cin>>number;
        cin>>d;
        string num = to_string(number),ans="";
        int n=num.size();
        cout<<num<<" "<<d<<" ";
        for(i=0;i<n;i++)
        {  
            if(num[i] == d+'0')
            {
                cout<<d<<" ";
                if(d==0)
                {
                    while(i++<n)
                        ans.push_back(d+'1');
                }
                else
                {
                    ans.push_back(d+'1');
                    i++;
                }
                cout<<num[i]<<" "<<ans<<" ";
                break;
            }
            ans.push_back(num[i]);
            cout<<num[i]<<" "<<ans<<" ";
        }
        while(i< n)
        {
            ans += '0';
            i++;
        }
        cout<<ans<<" "<<number<<endl;
    }
return 0;
}

// if(s[i]=='9') 
//             {
//                 find(s,i-1,carry=1);
//             }   
//             else if(s[i]==d-1 && carry==1)    dp[i]= 1 , find(s,i-1,carry=0)
           