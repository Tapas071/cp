#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, k;
    cin>>n>>k;
    vector<int> nums(n);
    for( int i =0; i< n; i++){
        cin>>nums[i];
    }
    bool isSorted = true;
    for( int i =1; i< n; i++){
        if( nums[i-1]>nums[i])isSorted=false;
    }
    if(k==1 and !isSorted)cout<<"NO\n";
    else cout<<"YES\n";
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
