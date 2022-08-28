#include <iostream>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int A[n + 1] = {};

    int zrp = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (!t)
        {
            zrp++;
            A[zrp] = i + 1;
        }
    }

    for (int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        if (!A[t])
        {
            cout << "-1 ";
        }
        else
        {
            cout << A[t] << " ";
        }
    }

    return 0;
}