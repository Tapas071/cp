#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n ;
    cin>>n;
    vector<int> a(n);
    for( int i =0; i< n ; i++){
        cin>>a[i];
    }
    int prevVal =-1,ct=0, ans=0;
    for( int i =0; i< n; i++){
        if( prevVal ==a[i]){
            continue;
        }
        else if( prevVal+1==a[i]){
            prevVal = a[i];
            ct++;

        }else {
            if(ct%2==0){
                ans += ct/2;
                
            }
            else {
                ans += (ct/2) +1;
            }
            prevVal = a[i];
            ct =1;
        }
    }
    if (ct % 2 == 0)
    {
        ans += ct / 2;
    }
    else
    {
        ans += (ct / 2) + 1;
    }
    cout<<ans<<endl;
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
