#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int ans=INT_MIN, n ;
    cin>>n;
    string s;
    cin>>s;

    for(auto x : s){
        ans = max( ans, (x-'a')+1);
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
 problem link :https://codeforces.com/problemset/problem/1760/B

 Status : unsolved


*/