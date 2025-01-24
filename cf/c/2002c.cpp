#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, xt,yt,xs,ys;
    cin>>n;
    vector<pair<long long, long long>> nums(n);
    for( int i =0; i<n ; i++){
        long long x ,y;
        cin>>x>>y;
        nums[i]= {x,y};
    }
    long long d;
    
    cin>>xs>>ys>>xt>>yt;
    d = (((xs-xt)* (xs-xt)) + ((ys-yt)*(ys-yt)));
    for( int i =0; i<n ; i++){
        long long modDis;
        long long x = nums[i].first;
        long long y = nums[i].second;
        modDis = (((x - xt) * (x - xt)) + ((y - yt) * (y - yt)));
        if( modDis <= d){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";

   

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
 problem link :https://codeforces.com/problemset/problem/2002/C

 Status : unsolved


*/

