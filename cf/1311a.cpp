#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b;
cin>>a>>b;
if( a==b)cout<<0<<endl;
else if(b>a){
if((b-a)%2)cout<<1<<endl;
else cout<<2<<endl;
}
else {
if((a-b)%2==0)cout<<1<<endl;
else cout<<2<<endl;

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
 problem link :https://codeforces.com/problemset/problem/2002/A

 Status : unsolved


*/

