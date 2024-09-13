#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int prev =-1 , ct =0 , ans=0;
    for(int i =0; i<n;i++){
        int a ;
        cin>>a;
        if( a==0){
            ct++;
            ans = max( ans , ct);
            prev =0;
        }
        else{
            ct =0;
            prev =1;
        }
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
 problem link :https://codeforces.com/problemset/problem/1985/C

 Status : unsolved


*/