#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
for a given N ,the no of ways to choose X in range[0,2^N-1] such that x?(x+1) = (x+2)?(x+3) XOR operation   ans should be modulo 10^9 +7
        Every second pair will give xor ==1
        so divide by 2
(n+1)/2
*/
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 29){
            int c = pow(2, n-1);
            cout << c << endl;
        }
        else
        {
            int c= pow(2,28);
            for (int i = 29; i < n; i++)
            {
                c *= 2;
                if (c>1000000006)
                    c-=1000000007;
            }
            cout << c << endl;
        }
    }
    return 0;
}