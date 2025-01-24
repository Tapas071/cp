#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k, sum =0;
    cin>>n>>k;
    for( int i =0; i<n ; i++){
        int x ;
        cin>>x;
        sum+= x;
    }
    if( sum%k==0)cout<<sum/k<<endl;
    else cout<<(sum/k)+1<<endl;

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

