#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        int k,i,j,x,y;
        cin>>k;
        x= k/8;
        y= k%8;
        for(i=0;(i<x && i<8);i++)
        {
            for(j=0;j<8;j++)
            {
                if(i==0 && j==0)
                    cout<<"o";
                else
                    cout<<".";
            }
        cout<<endl;
        }
        if(y==0)
        {
            y=8;
        }
        else
        {
            for(j=0;j<8;j++)
            {
                if(j<y)
                {
                    if(i==0 && j==0)
                        cout<<"o";
                    else
                        cout<<".";
                }
                else
                    cout<<"x";
            }
            i++;
            cout<<endl;
        }
        for(j=0;(j<8 && i<8);j++)
        {
            if(j<y+1)
                cout<<"x";
            else
                cout<<".";
        }
        if(i<8)
            cout<<endl;
        for(; i<7;i++)
        {
            for(j=0;j<8;j++)
                cout<<".";
            cout<<endl;
        }
        cout<<endl;
    }
}
