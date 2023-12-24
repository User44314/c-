#include <bits/stdc++.h>

int main()
{
    int currval = 0;
    int val = 0;
    if (std::cin >> currval)  // прочитайте перше число та переконайтеся, що у нас є дані для обробки
    {
        int cnt = 1;
        while (std::cin >> val) //прочитайте решту чисел
        {
            if (val == currval)
                ++cnt;
            else
            {
                std::cout << currval << " occuraci " << cnt << " times " << std::endl;
                currval = val;
                cnt = 1;
            }
        }
        std::cout << currval << " occurace " << cnt << " times " << std::endl;
    }
    return 0;
}