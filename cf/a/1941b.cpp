#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for( int i=0;i< n ; i++){
        cin>>nums[i];
    }
   for( int i =1; i< n -1;i++){
    nums[i]-=(nums[i-1]*2);
    nums[i+1]-=(nums[i-1]);
    if( nums[i]<0){
        cout<<"NO\n";
        return;
    }
   }
   if(nums[n-1]==0 and nums[n-2]==0)cout<<"YES\n";
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
 problem link :https://codeforces.com/problemset/problem/1941/B

 Status : solved


*/

