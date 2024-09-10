#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    unordered_map<int,int> m;
    int ans = -1;
    for( int i =0;i < n ; i++){
        int k;
        cin>>k;
        m[k]++;
        if( m[k]>=3)ans=k;
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
 problem link :https://codeforces.com/problemset/problem/1669/C

 Status : unsolved
 
*/