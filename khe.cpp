#include <iostream>

typedef struct
{
    int tl, gt, dg;
} Item;

using namespace std;

int main()
{
    Item items[12];
    int n, W;
    cin >> n >> W;
    for (int i = 0; i < n; i++)
    {
        cin >> items[i].tl >> items[i].gt;
        items[i].dg = items[i].gt / items[i].gt;
    }

    int F[12][W + 1];

    for (int V = 0; V <= W; V++)
    {
        int temp = V / items[0].tl > 0 ? 1 : 0;
        F[0][V] = temp * items[0].gt;
    }

    for (int k = 1; k < n; k++)
    {
        for (int V = 0; V <= W; V++)
        {
            F[k][V] = F[k - 1][V];
            if (V >= items[k].tl)
            {
                F[k][V] = max(F[k][V], F[k - 1][V - items[k].tl] + items[k].gt);
            }
        }
    }

    cout << F[n - 1][W];

    return 0;
}