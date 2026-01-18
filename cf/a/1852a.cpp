
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, diff = INT_MAX;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (int i = 1; i < n; i++)
    {
        diff = min(diff, nums[i] - nums[i - 1]);
    }
    if (diff < 0)
        cout << 0 << endl;
    else
        cout << (diff / 2) + 1 << endl;

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
