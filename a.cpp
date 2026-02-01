
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe
// powershell cmd to push into git:  git status; git add .; git commit -m "adding 1726a cf question"; git push

void solve()
{
 int n;
 cin>>n;
 vector<int> nums(n);
 for( int i =0; i< n; i++){
    cin>>nums[i];
 }
 int ans =0;
 for( int i =0; i< n-1; i++){
    ans = max( ans, nums[n-1]-nums[i]);
 }
 for (int i = 1; i < n ; i++)
 {
     ans = max(ans, nums[i] - nums[0]);
 }
 for( int i=1;i< n;i++){
    ans = max( ans, (nums[i-1]- nums[i]));
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

*/