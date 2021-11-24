#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
    long int c,n,q,maxx=0,s;
    cin>>n>>q;
    char ch;
    long int b[26]={0};
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        b[ch-97]++;
    }
    for(int i=0;i<q;i++)
    {
        s=0;
        cin>>c;
        for(int i=0;i<26;i++)
        {
            if(b[i]>c)
                s+=(b[i]-c);
            //cout<<s<<" "<<b[i]<<endl;
        }
        cout<<s<<endl;
    }
    }
}
