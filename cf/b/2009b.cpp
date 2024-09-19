#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> ans;
    for(int i =0; i< n;i++){
        string s;
        cin>>s;
        for(int j =0; j< s.size(); j++){
            if(s[j]=='#')ans.push_back(j+1);

        }
    }
    reverse(ans.begin(), ans.end());

    for( auto x : ans)cout<<x<<" ";
    cout<<endl;
    
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
 problem link :https://codeforces.com/problemset/problem/2009/B

 Status : unsolved

*/