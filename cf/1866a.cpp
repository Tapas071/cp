#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
ll n, ans=INT_MAX;
cin>>n;
for( int i=0; i< n; i++){
    int k ;
    cin>>k;
    if( ans> abs(k)){
        ans =abs(k);
    }
}
cout<<ans<<endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
