#include<iostream>
using namespace std;
/*int count(int a[])
{
    int counts=0;
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
        if(a[i]==1)
            counts++;
    }
    return counts;
}*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n,s;
        cin>>n;
        int a[10]={0};
        int b;
        for(i=0;i<n;i++)
        {
            cin>>b;
            cout<<b;
            for(j=9;j>=0;j++)
            {
                s=b%10;
                a[j]=s^a[j];
                b=b/10;
                cout<<s<<" ";
            }
        }
       // s=count(a);
        //cout<<s<<endl;
    }
    return 0;
}
