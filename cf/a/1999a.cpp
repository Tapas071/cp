#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
int ans =0;
while(n!=0){
	ans+= (n%10);
	n/=10;
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
 problem link :https://codeforces.com/problemset/problem/2002/A

 Status : unsolved


*/

