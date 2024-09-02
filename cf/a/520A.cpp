#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> m(26,0);
    for( int i=0; i<n; i++){
        char ch = toupper(s[i]);
        m[ch-'A']++;
    }
    for(int i =0; i<  26;i++){
        if( m[i]==0){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";

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
 problem link :https://codeforces.com/problemset/problem/520/A

 Status : solved


*/