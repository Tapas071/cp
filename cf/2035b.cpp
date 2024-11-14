#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string ans = "";
    if(n==1 or n ==3){
        cout<<"-1\n";
        return;
    }
    if( n%2==1){
        ans += "363";
     for( int i =4; i< n; i++){
        ans+='6';
     }

     ans += "6";
    }
    else{
        for( int i =0; i< n-2; i++){
            ans+='6';
        }
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

