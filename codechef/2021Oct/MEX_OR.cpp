//                 x:       3 4 5 6 7  8  9  10  11  12  13  14  15  16
// Sum of OR upto x -:      3 7 7 7 7 15 15  15  15  15  15  15  15  16
// MEX(minimum excluded):   4 4 4 4 8  8  8   8   8   8   8   8  16  16 (MEX  next missing <=x) 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,lastbitset=1;
        cin>>x;
        while(lastbitset<x)
            lastbitset = lastbitset<<1;
        cout<<lastbitset/2<<" ";
        if(x<2)
            cout<<x+1<<endl;
        else if(lastbitset==x || lastbitset-1==x)
            cout<<lastbitset<<endl;
        else
            cout<<lastbitset/2<<endl;
    }
return 0;
}