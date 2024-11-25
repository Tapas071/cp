#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> a , b;
    int minCap = INT_MIN , curCap=0;
    for(int i =0; i< n ; i++){
        int exit , enter;
        cin>>exit>>enter;
        curCap -= exit;
        curCap += enter;
        minCap = max(minCap , curCap);
    }
    cout<<minCap<<endl;
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
 problem link :https://codeforces.com/problemset/problem/116/A

 Status : unsolved


*/

