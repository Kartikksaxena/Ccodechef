#include <iostream>
#include<math.h>
using namespace std;
void countSort(long int arr[],long int n, int exp)
{
    int output[n];
    int i, count[10] = {0};
    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}
void radixsort(long int arr[],long int n,int max)
{
    long int i;
  for ( i= 1;i<=max;i++)
        countSort(arr, n, pow(10,i));
}
int binarySearch(long int arr[],long int p,long int r,long int num) {
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] > num)
         return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int i,j,n,q,k;
        cin>>n>>q;
        long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        while(q--)
    {
        cin>>k;
        long int b[n],c[n];
        long int s=0,l;
        for(i=0;i<n;i++)
        {
            b[i]=a[i]^k;
            c[i]=a[i]^k;
        }
        radixsort(b,n,7);
        for(i=0;i<n;i++)
        {
         l=binarySearch(b,0,n-1,c[i]);
        s+=l;
        }
        cout<<s<<endl;
    }
    }
return 0;
}
