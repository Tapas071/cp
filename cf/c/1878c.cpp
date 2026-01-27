
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

void solve()
{
    long long n, x, k;
    cin >> n >> k >> x;
    long long sumFromFirst = 0, sumFromLast = 0;

    sumFromFirst = (k * (k + 1)) / 2;
    sumFromLast = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
    // for( int i =1; i<=k ; i++){
    //     sumFromFirst +=i;
    //     sumFromLast += (n-i+1);
    // }
    if (sumFromFirst <= x and sumFromLast >= x)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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


*/