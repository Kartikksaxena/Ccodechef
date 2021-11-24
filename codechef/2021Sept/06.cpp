#include <bits/stdc++.h>
using namespace std;
int solve(int n, int base)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum + n % base;
        n = n / base;
    }
    return sum;
}
int main()
{
    int t, n, l, r;
    cin >> t;
    while (t--)
    {
        int temp = 1e9, sum = 0, count = 0;
        cin >> n >> l >> r;
        int a = n / r;
        for (int i = r; i >= l; i = n / a)
        {
            ++a;
            if (i == n / (a))
            {
                a = n / i;
                continue;
            }
            sum = solve(n, i);
            if (sum == 1)
            {
                count = i;
                break;
            }
            if (sum <= temp)
            {
                temp = sum;
                count = i;
            }
        }
        cout << count << endl;
    }
}