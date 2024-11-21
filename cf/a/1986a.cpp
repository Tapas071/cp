#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x1, x2, x3;
    cin>>x1>>x2>>x3;
    cout<<max({x1,x2,x3}) - min({x1,x2,x3})<<endl;

   

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
 problem link :https://codeforces.com/problemset/problem/1986/A

 Status : unsolved


*/

