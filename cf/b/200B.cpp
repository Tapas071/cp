#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n ;
    cin>>n;
    int sum =0;
    for( int i =0; i< n; i++){
       int k;
       cin>>k;
        sum+= k;
    }
    cout<<(((sum)*(1.0)/(100*(n)*1.0))*100)<<endl;

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
 problem link :https://codeforces.com/problemset/problem/200/B

 Status : solved

 problem


*/