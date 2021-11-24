#include<iostream>
using namespace std;
int sum(int a)
{
    while(a>=10)
    {
        int s=0;
        while(a)
        {
            s+=a%10;
            a/=10;
        }
        a= s;
    }
    return a;
}
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        int n,chef=0,morty=0;
        cin>>n;
        int c=0,m=1,x=2;
        long int a[n],b[n];
        for(int i=0; i<n;i++)
        {
            cin>>a[i]>>b[i];
            //cout<<sum(a[i])<<"    "<<sum(b[i])<<endl;
            if(sum(a[i])>=sum(b[i]))
                chef++;
            if(sum(a[i])<=sum(b[i]))
                morty++;
        }
       // cout<<chef<<"  "<<morty<<endl;
        if(chef>morty)
            cout<<c<<" "<<chef<<endl;
        else if(chef<morty)
            cout<<m<<" "<<morty<<endl;
        else
            cout<<x<<" "<<chef<<endl;
    }
    return 0;
}
