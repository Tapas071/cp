#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, ans =0;
    cin >> n;
    vector<int>a, b;
    a.push_back(0);
    for( int i =0; i< n; i++){
        int k ;
        cin>>k;
        a.push_back(k);
    }
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        b.push_back(k);
    }
    b.push_back(0);
    for( int i =1; i<a.size();i++){
        if(a[i]>b[i]){
            ans+=(a[i]-b[i]);
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
 problem link :https://codeforces.com/problemset/problem/2002/A

 Status : unsolved


*/
