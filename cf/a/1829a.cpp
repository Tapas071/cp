#include <bits/stdc++.h>
using namespace std;
void solve()
{

    string s;
    cin>>s;
    int ans =0;
    string cf = "codeforces";
    for( int i =0; i<cf.size();i++){
        if(s[i]!=cf[i])ans++;
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
 problem link : https://codeforces.com/problemset/problem/1829/A

 problem statement : Timur loves codeforces. That's why he has a string s
 having length 10
 made containing only lowercase Latin letters. Timur wants to know how many indices string s
 differs from the string "codeforces".

For example string s=
 "coolforsez" differs from "codeforces" in 4
 indices, shown in bold.

Help Timur by finding the number of indices where string s
 differs from "codeforces".

Note that you can't reorder the characters in the string s
.

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases.

Each test case is one line and contains the string s
, consisting of exactly 10
 lowercase Latin characters.

Output
For each test case, output a single integer — the number of indices where string s
 differs.

 Status : Solved


*/