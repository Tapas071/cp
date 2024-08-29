#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int s1, s2,s3, s4;
    cin>>s1>>s2>>s3>>s4;
    if(max(s1,s2)> min(s3,s4) and max(s3,s4) > min(s1,s2))cout<<"YES\n";
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
 problem link :https://codeforces.com/problemset/problem/2002/A

 Status : solved


*/