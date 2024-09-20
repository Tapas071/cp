#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int ans ,x, y,k;
    cin>>x>>y>>k;
    if (ceil((x * 1.0) / (k * 1.0)) > (ceil((y * 1.0) / (k * 1.0))))
    {
        ans = 2*(ceil((x*1.0)/(k*1.0)));
        ans--;
    }
    else
    {
        ans = 2 * (ceil((y * 1.0) / (k * 1.0)));
    }
   cout<<ans<<endl;

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
 problem link :https://codeforces.com/problemset/problem/2007/C

 Status : unsolved


*/

