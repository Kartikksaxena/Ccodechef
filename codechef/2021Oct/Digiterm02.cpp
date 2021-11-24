#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string num;
        char d;
        int ans = 0;
        int carry=0;
        cin>>num;
        cin>>d;
        int number = stoi(num),i=0,n=num.size();
        // cout<<num<<" "<<d<<" ";
        for(i=0;i<n;i++)
        {   
            if(num[i] == d)
            {
                if(d=='0')
                {
                    while(i++<n)
                        ans =ans*10 + (d+1-'0');
                }
                else if(d=='9'){
                    if(i==0)
                    {
                        ans = 10;
                        i++;
                        break;
                    }
                    ans =ans*10 ;
                    string temp=to_string(ans);
                    for(int j=temp.size()-2;j>=0;j--)
                    {
                        if(temp[j]<'8'){
                            temp[j] = temp[j]+1;
                            break;
                        }
                        temp[j] = '0';
                        if(j==0)
                            temp = '1'+temp;
                    }
                    ans = stoi(temp);
                i++;
                }
                else
                {
                    ans =ans*10 + (d+1-'0');
                    i++;
                }
                // cout<<num[i]<<" "<<ans<<" ";
                break;
            }
            ans = ans*10 + (num[i]-'0');
            // cout<<num[i]<<" "<<ans<<" ";
        }
        while(i< n)
        {
            ans*=10;
            i++;
        }
        cout<<ans-number<<endl;
    }
return 0;
}
// all cases of 9 and 0
// 13
// 21 5
// 8 8
// 100 0
// 5925 9
// 434356 3
// 43004070 0
// 434379 4
// 19 9
// 2007 0
// 453 4
// 8889 9
// 7923 9
// 9235598