#include <bits/stdc++.h>
using namespace std;
int helper(vector<int> &nums ){
    int n = nums.size();
    int first = nums[0];
    int ct =1;
    for( int i =1; i<n; i++){
        if( nums[i]==first)ct++;
        else break;
    }
    for( int i = n-1; i>=1;i--){
        if(nums[i]==first)ct++;
        else break;
    }
    return n- ct;
    
}
void solve()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i =0;i< n; i++){
        int k;
        cin>>k;
        nums[i]=k;
    }
    if( n ==1){
        cout<<"0"<<endl;
        return;
    }
    int ct=0, firstVal = nums[0];
    int ans1 = helper( nums);
    reverse(nums.begin(), nums.end());
    int ans2 = helper( nums);
    int ans = min(ans1, ans2);
    if(ans<=0)ans=0;
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
 problem link :https://codeforces.com/problemset/problem/1931/C

 Status : solve


*/

