#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, m;
    cin>>n>>m;
    multiset<ll>s;
    for( ll i =0; i< n; i++){
        ll val;
        cin>>val;
        s.insert( val);
    }
    for(ll i =0; i< m;i++){
        ll val;
        cin>>val;
        auto it = s.upper_bound(val);
        if(it==s.begin())cout<<-1<<endl;
        else{ 
            cout<<(*(--it))<<endl;
            s.erase(it);
        }
    }
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
