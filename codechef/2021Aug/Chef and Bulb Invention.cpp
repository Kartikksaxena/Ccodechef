// 11 9 5  => [0 5 10] [1 6] [2 7] [3 8] [4 9] (total 11 th day)
// 10 4 5 => [0 5] [1 6] [2 7] [3 8] [4]  (total 9th)
// 10 6 5 => [0 5 10] [1 6] =(total 5)
//    think about these test cases
// 5 2 3
// 10 0 3
// 10 5 5
// 10 6 5
// 10 4 5
// 10 9 5
// 10 9 6
// day =  if(p==0)
//         {
//             cout<<"1"<<endl;
//             continue;
//         }
//         int day= (n/k)*(p%k)+min(n%k,p%k) + p/k +1;

// Approach 2
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,k;
        cin>>n>>p>>k;
        int day=0;
        int rem = p%k;
        for(int i=0;i<rem;i++)
        {
            if(i<n%k)
                day+=1;
            day += n/k;
        }
        cout<<day<<" ";
        day +=p%k;
        cout<<day<<endl;
    }
    return 0;
}
