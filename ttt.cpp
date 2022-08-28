#include <iostream>

using namespace std;

void read(char A[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> A[i][j];
}
void check(char A[3][3])
{
    int countX = 0;
    int countO = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] == 'X')
                countX++;
            if (A[i][j] == 'O')
                countO++;
        }
    if (countO > countX)
        cout << "no\n";
    else
        cout << "yes\n";
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char A[3][3];
        read(A);
        check(A);
    }
    return 0;
}