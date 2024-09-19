#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int l, r,val;
    cin>>l>>r;
    val = l;
    int inc =1 , ans =0;
    while( val<=r){
        ans++;
        val +=inc;
        inc++;
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
 problem link :https://codeforces.com/problemset/problem/2010/A

 Status : solved


*/