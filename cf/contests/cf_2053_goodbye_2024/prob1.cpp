// Author Tapas Mondal
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, ans = 0;
    cin >> n;
    vector<int> a;
    for( int i =0; i< n; i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    sort(a.begin(), a.end());
    if( n==2){
        if( a[0] < a[1] + a[1] ){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else {
        for( int i =0; i<  n -2; i++){
            if(a[i] >= a[i+1] + a[i+2]){
                cout<<"NO"<<endl;
                return;
            }
            
        }
    cout<<"YES"<<endl;
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