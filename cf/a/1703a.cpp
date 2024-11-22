#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s , modString ="";
    cin>>s;

    for( int i=0; i< s.size();i++){
        modString += (char)toupper(s[i]);
    }
    if(modString =="YES")cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   

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
 problem link :https://codeforces.com/problemset/problem/1703/A

 Status : unsolved


*/

