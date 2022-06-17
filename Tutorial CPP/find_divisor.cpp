#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A;
    cin >> A;
    int i;
    for (i = 1; i * i < A; i++)
    {
        if (A % i == 0)
            cout << i << endl;
    }
    if (i - (A / i) == 1)
    {
        i--;
    }
    for (; i >= 1; i--)
    {
        if (A % i == 0)
            cout << A / i<< endl;
    }

    return 0;
}
