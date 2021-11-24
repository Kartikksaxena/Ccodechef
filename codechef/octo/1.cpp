#include<iostream>
using namespace std;
int main()
{
int t,i,n;
cin>>t;
while(t--)
{
    cin>>n;
    int a[101];
    int count=0;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
    {
        if(i==1)
            count++;
        if(i==2 && (a[i]<a[1]))
            count++;
        else if(i==3 && (a[i]<a[1]) && (a[i]<a[2]))
            count++;
        else if(i==4 && (a[i]<a[1]) && (a[i]<a[2]) && (a[i]<a[3]))
            count++;
        else if(i==5 && (a[i]<a[1]) && (a[i]<a[2]) && (a[i]<a[3]) && (a[i]<a[4]))
            count++;
        else if(i==6 && (a[i]<a[1]) && (a[i]<a[2]) && (a[i]<a[3]) && (a[i]<a[4]) && (a[i]<a[5]))
            count++ ;
        else if(i>6 && (a[i]<a[i-1]) && (a[i]<a[i-2]) && (a[i]<a[i-3]) && (a[i]<a[i-4]) && (a[i]<a[i-5]))
            count++;
    }
    cout<< count<< endl;

}
}
