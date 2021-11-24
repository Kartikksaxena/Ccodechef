
#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
string s1;
cin>>s1;
int k=0;
int n= s1.length();
for(int i=0;i<n;i++)
{
    int j=1;
    char c=s1[i];
    for(i=i+1;s1[i]==c;i++)
        j++;
    if(j>99)
        k+=4;
    else if(j>9)
        k+=3;
    else
        k+=2;
    i--;
//cout<<j<<" "<<k<<" "<<i<<" "<<s1[i]<<"\n";
}
if(k<n)
    cout<<"YES\n";
else
    cout<<"NO\n";
}
return 0;
}
