#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int ans =0, n ;
    cin>>n;
    string s;
    cin>>s;
    
    unordered_map<int, int> m;
    for( int i=0;  i< n; i++){
        m[s[i]]++;
        if(m[s[i]]==1)ans+=2;
        else ans++;
    }
    cout<<ans<<endl;
    
   

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

