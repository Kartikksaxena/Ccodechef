#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,i,j,x,y;
        cin>>k;
        x = k/8;
        y = k%8;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(i==0 && j==0)
                    cout<<"o";
                else if(i<x || (i==x)&& (j<y))
                    cout<<".";
            }
        }
    }
    return 0;
}
