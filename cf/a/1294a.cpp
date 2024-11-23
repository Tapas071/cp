#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n ,a , b,c;
    cin>>a>>b>>c>>n;
    int val = n - ((3* max({a, b, c})) - (a+b+c));
    if( val >=0 and val%3==0)cout<<"YES\n";
    else cout<<"NO\n";
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
 problem link :https://codeforces.com/problemset/problem/1294/A

 Status : unsolved


*/

