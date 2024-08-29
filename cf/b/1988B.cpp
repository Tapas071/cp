#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n ;
    cin>>n;
    string s;
    cin>>s;
    char prev = 't';
    int oneCt = 0 , zeroCt=0;
    for(auto x : s){
        if(x=='0'){
            if(prev=='0')continue;
            zeroCt++;
            prev = '0';
        }   
        else {
            oneCt++;
            prev='1';
        }

    }
    cout<<((oneCt>zeroCt) ? "YES\n":"NO\n");



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
 problem link :https://codeforces.com/problemset/problem/1988/B

 Status : solved
 

*/