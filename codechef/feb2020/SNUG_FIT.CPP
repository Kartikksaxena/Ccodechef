#include<bits/stdc++.h>
using namespace std;
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
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n;i++)
        s+=(a[i]<b[i]?a[i]:b[i]);
    cout<<s<<endl;
}
}
