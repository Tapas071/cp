#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n ,amax=0,bmax=0 ;
    cin>>n;
    vector<int> a(n),b(n),c;
    for( int i=0; i< n;i++){
        cin>>a[i];
        if( amax<= a[i])amax=a[i];
    }
   
    for( int i=0; i< n;i++){
        cin>>b[i];
        if (bmax <= b[i])
            bmax = b[i];
    }
    c = b;

    reverse(c.begin(), c.end());
    if( a == b or a ==c)cout<<"Bob\n";
    else cout<<"Alice\n";
   

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

