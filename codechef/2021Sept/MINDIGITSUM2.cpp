#include <bits/stdc++.h>
using namespace std;
long SumDigitBase(long n, long base)
{
    long sum = 0;
    while (n > 0)
    {
        sum = sum + n % base;
        n = n / base;
    }
    return sum;
}
int main()
{
    long t, n, r;
    cin >> t;
    while (t--)
    {
        long temp = 1e11, sum = 0, count = 0;
        cin >> n >> r;
        long a = n / r;
        for (long i = r; i >= 2; i = n / a)
        {
            ++a;
            if (i == n / (a))
            {
                a = n / i;
                continue;
            }
            sum = SumDigitBase(n, i);
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