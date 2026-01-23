
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int maxVal = -1;
    for (auto x : nums)
    {
        maxVal = max(maxVal, x);
    }
    vector<int> b, c;
    for (auto x : nums)
    {
        if (x == maxVal)
        {
            c.push_back(x);
        }
        else
            b.push_back(x);
    }
    if (b.size() == 0)
    {
        cout << -1 << endl;
        return;
    }
    cout << b.size() << " " << c.size() << endl;
    for (auto x : b)
        cout << x << " ";
    cout << endl;
    for (auto x : c)
        cout << x << " ";
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

/*


*/