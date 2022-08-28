#include <iostream>

using namespace std;

long C(int k, int n)
{
    long res = 1;
    for (int i = 1; i <= k; i++, n--)
    {
        res = res * n / i % 1000000007;
    }
    return res;
}

int main()
{
    int s, n;
    cin >> s >> n;
    cout << C(s, s + n - 1);
    return 0;
}
