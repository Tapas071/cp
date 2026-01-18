
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int odd = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k % 2)
            odd++;
    }
    if (odd % 2)
    {
        cout << "NO\n";
    }
    else
        cout << "YES\n";

    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
