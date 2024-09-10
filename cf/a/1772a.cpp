#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s; 
    cin>>s;
    cout<<(s[0]-'0')+(s[2]-'0')<<endl;

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
 problem link :https://codeforces.com/problemset/problem/1772/A

 Status : unsolved


*/