#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
   int val =1, ans =0;
if(n==1){
cout<<1<<endl;
return;
}
int i=1;
while(val<=n)
	{
	val+=i;
	i++;
	 ans++;
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

