#include <iostream>
using namespace std;
int getMax(int a[], int n)
{
    int mx = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > mx)
            mx = a[i];
    return mx;
}
void countSort(int a[], int n, int exp)
{
    int output[n];
    int i, count[10] = {0};
    for (i = 0; i < n; i++)
        count[ (a[i]/exp)%10 ]++;
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (a[i]/exp)%10 ] - 1] = a[i];
        count[ (a[i]/exp)%10 ]--;
    }
    for (i = 0; i < n; i++)
        a[i] = output[i];
}
void radixsort(int a[], int n)
{
    int m = getMax(a, n);
    for (int exp = 1; m/exp > 0; exp *= 10)
        countSort(a, n, exp);
}
int main()
{
     int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int j,max=0;
        int a[100000];

        for(i=0;i<n;i++)
            cin>>a[i];
        radixsort(a, n);
        for(i=0;i<n;i++)
            cout<<a[i]<<"  ";

        for(i=0;i<=n;i++)
        {
            int count=0;
            if(a[i]!=0)
            {
            for(j=i+1;j<n;j++)
            {
                if(a[j]%a[i]==0)
                {
                    count++;
                    a[j]==0;
                }
            }
            if(count>max)
                max=count;
            }
            cout<<max<<" ";
        }


    }
    return 0;
}
