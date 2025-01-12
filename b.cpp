#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string a,b;
    cin>>a>>b;
    int one =0;
    for( int i =0; i< n;i++){
        if(a[i]!=b[i]){
            cout<<"YES\n";
            return;
        }
        if(a[i]=='1')one++;
    }
    if(one%2 ==1){
        cout<<"YES\n";   
    }
    else cout<<"NO\n";
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