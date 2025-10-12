#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
ll n, sum=0 ;
cin>>n;
for( int i=0; i< n-1; i++){
    int k ;
    cin>>k;
    sum+= k;
}
cout<<sum * -1<<endl;
return;

}

int main()
{
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
