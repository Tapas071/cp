#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, x,y, sum=0;
    cin>>n>>x>>y;
    vector<int>a;
    for( int i =0;  i< n; i++){
        int k ;
        cin>>k;
        sum +=k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    
    

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

