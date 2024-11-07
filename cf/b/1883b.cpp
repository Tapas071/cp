#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,ct=0;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> m(26,0);
    int oddCt=0;
    for( auto x : s){
        m[x-'a']++;
    }
    for( auto x : m){
       if(x%2==1)ct++;
    }
    if(ct-1>k)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
   

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

