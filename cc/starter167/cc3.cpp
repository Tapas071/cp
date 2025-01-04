#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
   vector<int> nums(n);
   for( int i =0; i< n; i++){
    cin>>nums[i];

   }
   int chefInx, chef = nums[0];
   sort(nums.begin(), nums.end());
    for( int i =0; i<n ; i++){
        if( nums[i]==chef)chefInx=i;
    }
    int ans =0;
    if( chefInx ==0){
        ans = nums[chefInx] + (nums[1] - nums[chefInx]) / 2;
        cout <<ans<< endl;
    }
    else if ( chefInx == n-1) {
        ans = 1e6 - nums[chefInx] +1;
        ans += (nums[chefInx] - nums[chefInx -1]) / 2;
        cout<<ans<<endl;

    }
    else{
        ans += (nums[chefInx] - nums[chefInx - 1]) / 2;
        ans += (nums[chefInx+1] - nums[chefInx ]) / 2;
        ans +=1;
        cout<<ans<<endl;
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

