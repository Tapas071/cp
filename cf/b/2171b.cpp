#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n), ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    if (nums[0] == -1 and nums[n - 1] == -1)
    {
        cout << 0 << endl;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == -1)
                ans[i] = 0;
            else
                ans[i] = nums[i];
        }
    }
    else if (nums[0] == -1)
    {
        cout << 0 << endl;
        ans[0] = nums[n - 1];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == -1)
                ans[i] = 0;
            else
                ans[i] = nums[i];
        }
    }
    else if (nums[n - 1] == -1)
    {
        cout << 0 << endl;
        ans[n - 1] = nums[0];
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == -1)
                ans[i] = 0;
            else
                ans[i] = nums[i];
        }
    }
    else
    {
        cout << abs(nums[0] - nums[n - 1]) << endl;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == -1)
                ans[i] = 0;
            else
                ans[i] = nums[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

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
