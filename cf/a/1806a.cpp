
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    // initial coordinate (a,b) and the target coordinate ( c,d);
    if (d < b)
    {
        cout << -1 << endl;
        return;
    }
    ans += (d - b);
    a += ans;
    if (c > a)
    {
        cout << -1 << endl;
        return;
    }
    ans += (a - c);
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


*/