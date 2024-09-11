#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, minValB=INT_MAX, minValA = INT_MAX, ans = 0;
    cin>>n;
    vector<int> a(n),b(n);
    for( int i =0; i< n ; i++){
        cin>>a[i];
        if(a[i]<minValA)minValA = a[i];

    }
    for( int i =0; i< n ; i++){
        cin>>b[i];
        if (b[i] < minValB)
            minValB = b[i];
    }
    for(int i =0; i< n ; i++){
        ans += max((a[i]-minValA),(b[i]-minValB));
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
 problem link :https://codeforces.com/problemset/problem/1399/B

 Status : unsolved


*/