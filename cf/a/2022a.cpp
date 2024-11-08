#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long odd=0, n,r, sum=0, ans=0, happy=0, empty=0, unhappu=0;
    cin>>n>>r;
    vector<int> nums(n);
    
    for( int i =0; i< n ; i++){
        cin>>nums[i];
        if(nums[i]%2)odd++;
        sum+= nums[i];
    }
    happy += (sum-odd);
    empty = (2*r)- happy;
    
    happy+= min(empty- odd , odd);
    cout<<happy<<endl;




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
 problem link :https://codeforces.com/problemset/problem/2022/A

 Status : accepted


*/

