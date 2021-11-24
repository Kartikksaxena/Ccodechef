#include <iostream>
using namespace std;
int main()
{
     int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int j,max=0;
        int a[100000];
        int b[100000]={0};
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=n-1;i>=0;i--)
        {
            if(b[i]==0)
            {
                int count=0;
            for(j=i-1;j>=0;j--)
            {
                if(a[j]%a[i]==0)
                {
                    count++;
                    b[j]=1;
                }
            }
            if(count>max)
                max=count;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
