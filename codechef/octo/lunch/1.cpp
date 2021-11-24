#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{
     int t;
    cin>>t;
    while(t--)
    {
        int n,i,x,y,z;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        insertionSort(a,n);
        if(a[n/4]==a[(n/4)-1] || a[n/2]==a[(n/2)-1] || a[3*n/4]==a[(3*n/4)-1])
            cout<<"-1"<<endl;
        else
        {
            x=a[n/4];
            z=a[3*n/4];
            y=a[n/2];
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
return 0;
}
