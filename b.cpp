#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, mai=0, ajisai=0;
    cin>>n;
    vector<int> a(n), b(n);
    for( int i =0; i< n; i++)cin>>a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for( int i =0; i< n; i++){
        if(a[i]!=b[i]){
            if( i%2){
                mai++;
            }
            else ajisai++;
        }
    }
    if(mai==ajisai){
        cout<<"TIE"<<endl;
        return;
    }
     if( mai> ajisai ){
        if( ajisai >0)cout<<"TIE"<<endl;
        else
        cout<<"MAI"<<endl;
     }
     else {
        if(mai>0)cout<<"TIE"<<endl;
        else
        cout<<"AJISAI\n";
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
