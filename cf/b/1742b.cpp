#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
bool ans =true;
 unordered_map<int,int> m;
for(int i =0; i< n; i++){
	int k;
	cin>>k;
	if(m[k]==1) ans=false;
	m[k]++;	
}
if(ans==false)cout<<"NO"<<endl;
else cout<<"YES"<<endl;

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
 problem link :https://codeforces.com/problemset/problem/1742/B

 Status : unsolved


*/

