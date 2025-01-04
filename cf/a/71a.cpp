#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    for( int i =0 ; i< n; i++){
        string s;
        cin>>s;
        if( s.size()<=10)cout<<s<<endl;
        else {
            int len = s.size();
            string ans ="";
            ans += s[0];
            ans += to_string(len -2);
            ans += s[s.size()-1];
            cout<<ans<<endl;
        }
    }
   

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
 problem link :https://codeforces.com/problemset/problem/2002/A

 Status : unsolved


*/

