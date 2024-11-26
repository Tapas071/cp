// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n;
//     cin>>n;
//      int totalSum =0 , neg =0;
//     for( int i =0; i< n ;i++){
//         int k;
//         cin>>k;

//         totalSum +=k;
//         neg = min( totalSum, neg);

//     }
   

//     return;
// }

// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

/*
 problem link :https://codeforces.com/problemset/problem/2002/A

 Status : unsolved


*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int ans = 0;
    for (int i = 0; i < n / 2; ++i)
    {
        ans += a[n - i - 1] - a[i];
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
