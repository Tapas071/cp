#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int maxVal =0 , ans =0;
    for(int i =0; i< n; i++){
        int a, b;
        cin>>a>>b;
        if(a<=10){
            if( maxVal<=b){
                maxVal = b;
                ans =i+1;
            }
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
 problem link :https://codeforces.com/problemset/problem/1985/C

 Status : unsolved


*/