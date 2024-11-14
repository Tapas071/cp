#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a , b, c;
    cin>>a>>b>>c;
    cout<<a+b+c - max({a,b,c})- min({a,b,c})<<endl;
   

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

 Status : unsolved


*/

