#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if( n%4)
        cout<<(n/4)+1<<endl;
    else cout<<(n/4)<<endl;
   

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

