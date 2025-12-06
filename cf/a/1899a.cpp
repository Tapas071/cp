#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n ;
    cin>>n;
    if(n%3)cout<<"First\n";
    else cout<<"Second\n";
    return;
    
}

int main()
{
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
