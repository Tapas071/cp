
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

void solve()
{
    long long a, b, n, totalTime = 0;
    cin >> a >> b >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        if (nums[i] >= a)
        {
            totalTime += a - 1;
        }
        else
            totalTime += nums[i];
    }
    totalTime += b;
    cout << totalTime << endl;
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