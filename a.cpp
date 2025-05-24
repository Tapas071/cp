#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, zeroCt=0;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        if( nums[i]==0)zeroCt++;
    }
    if( zeroCt ==0)
    {
        cout << "YES\n";
        return;
    }

    if (nums[0] == 0 and nums[1]==0)
    {
        cout << "YES\n";
        return;
    }
    if( n==2 and nums[0]==1 and nums[1]==1)
    {
        cout << "YES\n";
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == 0 and nums[i + 1] == 0)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
