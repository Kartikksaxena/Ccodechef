#include <iostream>
using namespace std;
int main()
{
    long int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long int j,max=0;
        long int a[100000];
        long int b[100000]={1};
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=n-1;i>=0;i--)
        {
            int count=0;
            if(b[i]==1)
            {
            for(j=i-1;j>=0;j--)
            {
                if(a[j]%a[i]==0)
                {
                    count++;
                    b[j]=0;
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
