#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >>s;

    unordered_set<char> st;
    for(auto x : s){
        st.insert(x);
    }
    if(st.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else cout<<"IGNORE HIM!"<<endl;
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
 problem link :https://codeforces.com/problemset/problem/236/A

 Status : solved


*/