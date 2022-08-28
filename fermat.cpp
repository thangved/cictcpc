#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        std::cin >> t;
        if (t == 2)
        {
            std::cout << "1" << std::endl;
            continue;
        }
        std::cout << "0" << std::endl;
    }
    return 0;
}