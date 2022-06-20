
#include <bits/stdc++.h>
using namespace std;

int min_elimination(int n, int arr[])
{
    int countOdd = 0;

    for (int i = 0; i < n; i++)

        if (arr[i] % 2)
            countOdd++;

    return min(countOdd, n - countOdd);
}

int main()
{
    int arr[] = {1, 2, 3, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int countOdd = 0;

    for (int i = 0; i < n; i++)

        if (arr[i] % 2)
            countOdd++;

    cout << min_elimination(n, arr);

    return 0;
}