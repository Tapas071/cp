#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int maxVal, minVal;
    int ans=0;
    for(int i =0; i< n ; i++){
        int k;
        cin>>k;
        if( i==0){
            maxVal =k;
            minVal = k;
        }
        else{
            if( k> maxVal){
                ans++;
                maxVal =k;
            }
            if(k<minVal){
                ans++;
                minVal= k;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
 problem link :https://codeforces.com/problemset/problem/155A/C

 Status : unsolved


*/