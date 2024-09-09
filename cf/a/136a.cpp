#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> nums;
    unordered_map<int,int> m;

    for( int i =1; i<= n;i ++){
        int k;
        cin>>k;
        m[k]=i;
    }
    for( int i=1; i<= n; i++)cout<<m[i]<<" ";
    cout<<endl;
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
 problem link :https://codeforces.com/problemset/problem/136/A

 Status : solved


*/