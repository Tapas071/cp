#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;

    vector<int>nums(n);
    for( int i =0; i<n ; i++){
        cin>>nums[i];
    }
    sort( nums.begin(), nums.end(), greater<int>());
    
    int ans =0, score = nums[k-1];
    for( auto x : nums){
        if(x >= score and x >0 )ans++;
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

