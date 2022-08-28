#include <iostream>

using namespace std;

int main()
{
    bool A[101] = {};

    for (int i = 0; i < 99; i++)
    {
        int n;
        cin >> n;
        A[n] = true;
    }
    for (int i = 1; i <= 100; i++)
    {
        if (!A[i])
        {
            cout << i;
            break;
        }
    }
    return 0;
}