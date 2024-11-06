#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int aTime, bTime, a , b, c;
    cin>>a>>b>>c;
    aTime = abs(a-1);
    bTime = abs(b-c) + abs(c-1);
    if(aTime<bTime)cout<<1<<endl;
    else if (aTime > bTime)cout<<2<<endl;
    else cout<<3<<endl;
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
 problem link :https://codeforces.com/problemset/problem/1739/A

 Status : solved


*/

