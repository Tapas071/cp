#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int up =0, low=0;
    for( auto x : s){
        if(toupper(x)==x){
            up++;
        }
        else low++;
    }
    string upString ="", lowString ="";
    for(auto x : s){
        upString += toupper(x);
        lowString += tolower(x);
    }
    cout<<(up>low? (upString):lowString)<<endl;
    return;
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
 problem link :https://codeforces.com/problemset/problem/59/A

 Status : unsolved


*/