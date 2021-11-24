/* C implementation QuickSort */
#include<iostream>
using namespace std;
int ch=0;
// A utility function to swap two elements
void swap(int* a, int* b,int *c, int *d)
{
	int t;
    t = *a;
	*a = *b;
	*b = t;
	t=*c;
	*c=*d;
	*d=t;
}
/* Function to print an array */
void printArray(int arr[],int kk[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout<<arr[i]<<" "<<kk[i]<<endl;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
	array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int parttition (int arr[],int kk[], int low, int high,int n)
{
	int pivot = arr[high]; // pivot
	int i = (low - 1); // Index of smaller element
    //cout<<low<<"  s  "<<high<<endl;
	for (int j = low; j <= high- 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
      //  printArray(arr,kk, n);
		if (arr[j] < pivot)
		{
			i++; // increment index of smaller element
			swap(&arr[i], &arr[j],&kk[i],&kk[j]);
		}
	}
	swap(&arr[i + 1], &arr[high],&kk[i+1],&kk[high]);
    //cout<<" "<<i<<" "<<arr[i+1]<<" s "<<kk[i+1]<<endl;
	//printArray(arr,kk, n);
	return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quicksort(int arr[],int kk[], int low, int high,int n)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = parttition(arr,kk, low, high,n);
       // cout<<pi<<" ";
		// Separately sort elements before
		// partition and after partition
		quicksort(arr,kk, low, pi - 1,n);
		quicksort(arr,kk, pi + 1, high,n);
	}
}

// Driver program to test above functions
int main()
{
    int n,i;
    cin>>n;
	int arr[n],kk[n];
	for(i=0;i<n;i++)
    {
        cin>>arr[i];
        kk[i]=i+1;
    }
	quicksort(arr,kk, 0, n-1,n);
	cout<<"Sorted array: \n";
	printArray(arr,kk, n);
	for(i=0;i<n;i++)
    {
        if(kk[i]!=i+1)
            ch++;
        cout<<kk[i]<<" "<<i+1<<" "<<arr[i]<<" "<<ch<<endl;
    }
    if(ch==0)
        cout<<"0"<<endl;
    else
    {
        for(i=0;i<n;i++)
        {
            while(kk[i]!=i+1  && ch>0)
                i++;

        }
    }
	return 0;
}
