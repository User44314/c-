#include <bits/stdc++.h>

int main()
{
    int sum = 0;
    int sum1 = 0;
    int val = 0;
    int sum2 = 0;
    int value2 = 0;

    while (val <= 10)
    {
        sum += val;
        ++val;
    }
    std::cout << sum << "\n";

    for (int val = -100; val <= 100; ++val)
    {
        sum1 += val;
    }
    std::cout << "SUM " << sum1 << std::endl;

    // while (std::cin >> value2)
    //     sum2 += value2;
    // std::cout << "sum3 " << sum2 << std::endl;
    return 0;
}