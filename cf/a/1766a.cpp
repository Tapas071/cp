#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ans = 0;
    cin >> n;
    // exp -- relation
    //    1-- 9
    //    2 - 18
    //    3 - 27
    //    4 - 36
    //    5 - 45
    int exp = log10(n);
    ans += (exp * 9);
    ans += n / (pow(10, exp));
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
