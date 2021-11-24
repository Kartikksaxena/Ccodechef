#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k,i,s=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    s+=a[i];
    s=s%k;
    }
    cout<<s<<endl;
}
}
