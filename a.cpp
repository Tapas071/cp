#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    unordered_set<int> sa,sb;
    for( int i =0; i< n; i++){

        cin>>a[i];
        sa.insert(a[i]);
    }

    for( int i =0; i< n; i++){
        cin>>b[i];
        sb.insert(b[i]);
    }
    if(sb.size() + sa.size() >3)cout<<"YES\n";
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

 Status : unsolved


*/
