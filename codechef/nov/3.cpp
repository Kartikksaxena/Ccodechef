#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i=0,C,c=0,chef=0,ram=0;
    cin>>n;
    while(n--)
    {
        int f=1,k=0;
        cin>>C;
        if((c%2)&&(C%2))
        {
            f=0;
            k=1;
        }
        c+=C;
        for(int j=1;j<=C;j++)
        {
            cin>>i;
            if(j<=(C+f)/2)
                chef+=i;
            else
                ram+=i;
        }
    }
    cout<<chef<<endl;
    }
return 0;
}

