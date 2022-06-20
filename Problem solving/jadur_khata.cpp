#include <bits/stdc++.h>
using namespace std;
int main()
{
    //stoi();
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = n - 1; i >= 0; i--)
        if (a[i] % 2 == 0)
        {
            cout << a[i] << endl;
        }
}