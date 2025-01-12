#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    unordered_map<int, int> m;

    int preSum = 0;
    m[preSum]++;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        preSum += nums[i];
    }
    cout << ans << endl;

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

/*
 problem link :https://codeforces.com/problemset/problem/1985/C

 Status : unsolved


*/