#include <bits/stdc++.h>

using namespace std;

int maxSubArraySum(int a[], int size)
{

   int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;

    // int best = 0;
    // for (int a = 0; a < n; a++)
    // {
    //     for (int b = 0; b < n; b++)
    //     {
    //         int sum = 0;
    //         for (int k = a; k < b; k++)
    //         {
    //             sum += a[k];
    //         }
    //         best = max(best, sum);
    //     }
    // }
    // return best;
}

int main()
{

    int a[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}


// Для i=0 a[0] = -1

// max_ending_here = max_ending_here + (-1)
// Встановіть max_ending_here = 0, оскільки max_ending_here < 0
// і встановіть max_so_far = -1