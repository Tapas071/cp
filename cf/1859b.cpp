#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int  n;
    cin>>n;
    vector<vector<int>> vals(n);
    for(int i =0; i< n ; i++){
        int m;
        cin>>m;
        vector<int> temp;
        for(int i =0; i< m ;i++){
            int mVal;
            cin>>mVal;
            temp.push_back(mVal);
        }
        vals.push_back(temp);
        temp.clear();
    }

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
 problem link :https://codeforces.com/problemset/problem/1859/B

 Status : unsolved


*/