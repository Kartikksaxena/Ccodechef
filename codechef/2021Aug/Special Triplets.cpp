// A%B =C ,, B%C=0 ,, 1<=A,B,C<=N
// => (A-C)%B =0   && B%C =0    =>  (A>=C)
// B= i*C (i>0)  && A = C,B+C,2B+c,3B+C ,....,((N-C)/(B*C)+1)B +C

//  for n= 5 triplets are (1,3,1), (1,2,1), (3,2,1), (1,4,1), (4,3,1), (1,5,1), (5,4,1), (5,2,1), (2,4,2).  

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        for(int i=1;i<=n/2;i++)
        {
            for(int j=2; j*i<=n;j++)
            {
                count += ((n-i)/(j*i))+1;
            // cout<<i<<" "<<j<<" "<<count<<endl;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}