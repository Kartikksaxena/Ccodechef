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
        char a[8][8] ={{46,46,46,46,46,46,46,46},{46,46,46,46,46,46,46,46},
                        {46,46,46,46,46,46,46,46},{46,46,46,46,46,46,46,46},
                        {46,46,46,46,46,46,46,46},{46,46,46,46,46,46,46,46},
                        {46,46,46,46,46,46,46,46},{46,46,46,46,46,46,46,46}};
        a[0][0] = 79;
        if(x==0)
            a[x][y] = 88;
        else if(y!=0)
        {
            for(j=y;j<8;j++)
                a[x][j]=88;
        }
        if(x<7 && y!=0)
        {
            for(j=0;j<=y;j++)
                a[x+1][j] = 88;
        }
        if(x<8 && y==0)
            for(j=0;j<8;j++)
                a[x][j] = 88;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
                cout<<a[i][j];
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}