#include <iostream>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
          quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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
        quickSort(a,1,n);
        if(a[n/4]==a[(n/4)-1] || a[n/2]==a[(n/2)-1] || a[3*n/4]==a[(3*n/4)-1])
            cout<<"-1"<<endl;
        else
        {
            x=a[n/4];
            z=a[3*n/4];
            y=a[n/2];
            cout<<x<<y<<z<<endl;
        }
    }
return 0;
}
