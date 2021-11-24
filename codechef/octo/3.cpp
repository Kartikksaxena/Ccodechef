#include <iostream>
using namespace std;

int main()
{
     int t,i;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[10000];
        for(i=0;i<n;i++)
            cin>>a[i];
        while(k)
        {
            if(k<n)
            {
            for(i=0;i<k;i++)
            a[i]=(a[i]^a[n-(i)-1]);
            }
            else{
            for(i=0;i<n;i++)
            a[i]=(a[i]^a[n-(i)-1]);
            }
        k=k-n;
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
	return 0;
}
