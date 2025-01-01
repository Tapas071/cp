#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one=0, zero =0;
    for( auto x : s){
        if(x=='0')zero++;
        else one++;
    }
    if(zero >0 and one > 0){
        cout<<1<<endl;
    }
    else cout<<max(one,zero)<<endl;
   

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

