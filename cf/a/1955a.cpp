#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
  	int ans= INT_MAX;
	ans = min( ans, n*a);
	int val =  (n/2)*b + (n-((n/2)*2))*a;
		ans = min( ans ,val);
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

