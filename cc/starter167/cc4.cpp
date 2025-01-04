#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for( int i =0; i< n ; i++){
        cin>>nums[i];
    }
    int ans =0;
    for( int i =1; i<n; i++){
        ans+= abs(nums[i-1]);
        nums[i] += ( ( nums[i-1]));


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

