#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    vector<int> a;
    a.push_back(nums[0]);
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] <= nums[i])
        {
            a.push_back(nums[i]);
        }
        else
        {
            a.push_back(nums[i]);
            a.push_back(nums[i]);
        }
    }
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
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
