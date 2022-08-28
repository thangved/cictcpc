#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}

int main()
{
    long long e, a;
    cin >> e >> a;
    long long bc = lcm(a, e);
    long long ca = 1000000000 / a;
    long long ce = 1000000000 / e;

    long long result = ca + ce;

    result -= 1000000000 / bc;

    cout << result;

    return 0;
}