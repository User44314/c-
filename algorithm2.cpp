#include <bits/stdc++.h>

using namespace std;
int arraySort(int a[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    int a[] = {1, 3, 8, 2, 9, 2, 5, 6}
}

// Для i=0 a[0] = -1

// max_ending_here = max_ending_here + (-1)
// Встановіть max_ending_here = 0, оскільки max_ending_here < 0
// і встановіть max_so_far = -1