// Author Tapas Mondal
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, ans = 0;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        a.push_back(k);
    }
    // sort(a.begin(), a.end());
    // reverse(a.begin(),a.end());
    // for( auto x : a)cout<<" "<<x;
    // cout<<endl;
    // if (n == 2)
    // {
    //     if (a[0] < a[1] + a[1] or a[1] < a[0] + a[0])
    //     {
    //         cout << "YES" << endl;
    //     }
    //     else
    //         cout << "NO" << endl;
    // }
    // else
    // {
        for (int i = 0; i < n - 1; i++)
        {
            int a1 = a[i], a2 = a[i+1];
            if (max(a1, a2) < min(a1, a2) + min(a1, a2))
            {
                cout << "YES"<< endl;
                return;
            }
        }
        cout << "NO" << endl;
    // }
    

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