#include <bits/stdc++.h>
using namespace std;
bool isContainDistinctDigit (int n){
    unordered_set<int> s;
    string nString = to_string(n);
    int sx = nString.size();
    for( auto x : nString)s.insert(x);
    return s.size()==sx;
}

void solve()
{
    int n;
    cin>>n;
    n++;
    int ans=0;

    while(true){
        if(isContainDistinctDigit(n)){
            ans =n;
            break;
        }
        n++;
        

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
    // cin >> t;

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

