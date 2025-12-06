#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n; 
   cin>>n;
   unordered_set<int>s;
   vector<int> nums(n);
   for( int i =0; i< n; i++){
    cin>>nums[i];
    s.insert(nums[i]);
   }
   sort( nums.begin(), nums.end());
   int sz = s.size();
   cout<<*lower_bound(nums.begin(), nums.end(), sz)<<endl;
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
