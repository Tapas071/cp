#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for( int i =0; i< n; i++){
        cin>>nums[i];

    }
    vector<int> ans;
    ans.push_back(1);
    int maxSum =nums[0];
    for( int i =1; i< n; i++){
        if(maxSum < nums[i]){
            ans.push_back(1);
            maxSum = nums[i];
        }
        else ans.push_back(0);

    }
    for( int i =0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


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
 problem link :https://codeforces.com/problemset/problem/1985/C

 Status : unsolved


*/