#include<bits/stdc++.h>
using namespace std;
void swapping(int &a, int &b)
{
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   while(i < nl && j<nr)
    {
      if(larr[i] <= rarr[j])
      {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl)
   {
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr)
   {
      array[k] = rarr[j];
      j++; k++;
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}
int main(){
int t;
cin>>t;
while(t--){
    int n,i;
    long long int s=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    mergeSort(a,0,n-1);
    mergeSort(b,0,n-1);
    for(i=0;i<n;i++)
        s+=(a[i]<b[i]?a[i]:b[i]);
    cout<<s<<endl;
}
}
