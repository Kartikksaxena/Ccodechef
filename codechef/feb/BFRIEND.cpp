#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int N,a,b,c;
        cin>>N>>a>>b>>c;
        long int x[N];
        long long int minn;
        for(long int i=0;i<N;i++)
        {
            cin>>x[i];
            long long int k;
            if(x[i]>b)
                k=x[i]-b;
            else
                k= b-x[i];
            //cout<<k<<" ";
            if(x[i]>a)
                k+=x[i]-a;
            else
                k+=a -x[i];
            k=k+c;
            //cout<<k;
            if(i==0)
                minn=k;
            //cout<<k<<" "<<minn<<endl;
            if(k<minn)
                minn=k;
        }
        cout<<minn;
    }
}
