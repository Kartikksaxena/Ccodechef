#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,max_2=0,flag=0;
        cin>>n;
        int a[n],min_2=n;
        for(i=0;i<n;i++)
            cin>>a[i];
        i=0;
        while(i<n-1)
        {
            int k=0,l=0;
            if(a[1]-a[0]>2)
                flag=1;
            while((a[i+1]-a[i])>2 && i<n-1)
            {
                k++;
                cout<<(a[i+1]-a[i])<<" ";
                i++;
            }
            cout<<k<<" k "<<l<<endl;
            while((a[i+1]-a[i])<3 && i<n-1)
            {
                l++;
                cout<<(a[i+1]-a[i])<<" ";
                i++;
            }
            cout<<k<<" l "<<l<<endl;
            if(k>1)
                flag=1;
            if(l>max_2)
                max_2=l;
            if(l<min_2)
                min_2=l;
            cout<<min_2+1<<" m "<<max_2+1<<" "<<flag<<endl;
            if(i==n-1)
                break;
        }
        if(flag==1)
            min_2=0;
        cout<<min_2+1<<" "<<max_2+1<<endl;
    }
    return 0;
}
