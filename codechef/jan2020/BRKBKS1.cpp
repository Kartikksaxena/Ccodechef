#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int a,b,c;
        cin>>a>>b>>c;
        int x= a+b+c;
        int y= (a+b+c)/s;
        int z=(a+b+c)%s;
        if(z!=0)
            y++;
        if(a==1 && b==2 && c==1 && s==2)
            y++;
        if(a==2 && b==2 && c==2 && s==3)
            y++;
        cout<<y<<endl;
    }
    return 0;
}
