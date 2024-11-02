#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a , b , c;
    cin>>a>>b>>c;

    if(a == (b+c) or b ==(a+c) or c ==(b+a) )cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   

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
 problem link :https://codeforces.com/problemset/problem/1742/A

 Status : unsolved


*/

