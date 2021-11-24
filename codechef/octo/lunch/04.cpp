#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int i,j,n,q,k;
        cin>>n>>q;
        long int a[100000];
        for(i=0;i<n;i++)
            cin>>a[i];
        while(q--)
    {
        cin>>k;
        long int b[100000];
        long int s=0;
        for(i=0;i<n;i++)
        {
            b[i]=a[i]^k;
        }
        int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (b[i] > b[j])
                inv_count++;
        cout<<inv_count;
    }
    }
return 0;
}
