#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long result = 0;

    for (int i = 1; i <= n; i++)
    {
        result += n / i;
    }

    cout << result;
    return 0;
}