#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n ,x;
    cin>>n>>x;
    vector<int>gasStation(n);
    for( int i =0; i< n; i++){
        cin>>gasStation[i];
    }
    int dist=0;
    for( int i =0; i< n ; i++){
        if(i==0){
            dist =gasStation[i];
        }
         else{
            dist = max( dist, gasStation[i]-gasStation[i-1]);
        }
        if ( i ==n-1){
            int roundTrip= 2*( x -gasStation[i]);
            dist= max( dist,roundTrip );
        }
       
    }
    cout<<dist<<endl;
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
