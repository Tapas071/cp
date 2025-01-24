#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,x , ans =0;
    cin>>n>>x;
    vector<long long> nums(n),mod(n);
    for( int i =0; i< n;i++ )
    {
        long long val;
        cin>>val;
        nums.push_back(val);
    }
    sort( nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    for( int i =0; i<n ; i++){
        long long val = nums[i] + ( i*x);
        mod.push_back(val);
    }
    for( auto x : mod)ans=max(ans, x);
    cout<<ans<<endl;
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
