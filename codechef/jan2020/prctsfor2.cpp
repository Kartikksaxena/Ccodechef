#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N=502;
const int mod=1e9+7;

int add(int a,int b){int res=(a+b)%mod;return (res<0)?res+mod:res;}
int mul(int a,int b){int res=(a*1LL*b)%mod;return (res<0)?res+mod:res;}

#define ii pair<int,int>

int n;
string s;

signed main(){
    int t=1;
    cin>>t;
    while(t--){
       cin>>n;
       int x=n;
       int cnt=0;
       if(n>1) while(!(x&1)){
           x>>=1;
           cnt++;
       }
       if(cnt&1) {
           cout<<"Lose"<<endl<<flush;
           cin>>s;
           if(s=="WA") return 1;
       }
       else {
           cout<<"Win"<<endl<<flush;
           while(true){
               if(n==1){
                   cout<<"-1"<<endl<<flush;
                   n--;
               }
            else if(n&1){
                int x=n+1;
                int cnt=0;
                while(!(x&1)){
                    x>>=1;
                    cnt++;
                }
                if(!(cnt&1)){
                    cout<<"-1"<<endl<<flush;
                    n--;
                }
                else{
                    cout<<"+1"<<endl<<flush;
                    n++;
                }
            }
            else{
                cout<<"/2"<<endl<<flush;
                n=n/2;
            }
            cin>>s;
            if(s=="/2") n=n/2;
            else if(s=="+1") n++;
            else if(s=="-1") n--;
            else if(s=="WA") return 1;
            else break;
            // cout<<n<<" : ";
           }
       }
    }
	return 0;
}
