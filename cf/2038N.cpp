#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    char a =s[0];
    char sign = s[1];
    char b = s[2];
    if(sign == '<'){
        if(a<b){
            cout<<s<<endl;
            return;
        }
        else if(b==0){
            b = '9';
        }
        else {
            a='0';
        }
    }
    else if(sign == '='){
    }
    else {
        if(a>b){
            cout<<s<<endl;
            return;
        }
        else if(a=='0'){
            a='9';
        }
        else b='0';
    }
    string ans = "";
    ans+=a;
    ans += sign;
    ans+= b;
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
 problem link :https://codeforces.com/problemset/problem/2002/A

 Status : unsolved


*/

