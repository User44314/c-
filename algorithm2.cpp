#include <bits/stdc++.h>

using namespace std;
void arraySort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << " " << a[i];
}

int main()
{
    int a[] = {1, 3, 8, 2, 9, 2, 5, 6};
    int N = sizeof(a) / sizeof(a[0]);
    arraySort(a, N);
    printArray(a, N);
    cout << endl;
    int v1[10] = {0, 1, 2, 33, 4, 5, 6, 7, 8, 9};
    int v2[10];
    // -----------------------------
    int *p = &v1[3];
    int x = *p;
    cout << x << endl;
    // -------------------------------
    for (auto i = 0; i != 10; ++i)
    {
        v2[i] = v1[i];
        
            cout << v2 << endl;
    }

    printf("bart simthon \n");
    printf("exit");
    getchar();

}

// Для i=0 a[0] = -1

// max_ending_here = max_ending_here + (-1)
// Встановіть max_ending_here = 0, оскільки max_ending_here < 0
// і встановіть max_so_far = -1