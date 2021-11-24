#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][3];
        for(int i=0;i<n;i++)
            cin>>a[i][0]>>a[i][1]>>a[i][2];
        int maxx = 0;
        int item = -1;
        int j,k;
        for(int i=0;i<n;i++)
        {
        //k= a[i][1] % (a[i][0]+1) ;
        j= a[i][1] / (a[i][0]+1) ;
        //if(k==0)
           // j=j-1;
        k= j*a[i][2];
        if(k>maxx)
        {
            maxx= k;
            item = i;
        }
        }
        cout<<maxx<<endl;
    }
}
