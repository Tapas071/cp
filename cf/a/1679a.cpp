
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

// powershell cmd to push into git:  git status; git add .; git commit -m "adding 1726a cf question from tle eliminator"; git push



void solve()
{
    long long x, y, n;
    cin >> n;
    if (n % 2 == 1 or n < 4)
    {
        cout << -1 << endl;
        return;
    }

    if (n % 4 == 0)
    {
        y = n / 4;
    }
    else
        y = (n / 4);
    if (n % 6 == 0)
    {
        x = n / 6;
    }
    else
    {
        x = n / 6;
        n = n - (n / 6) * 6;
        if (n % 4 == 0)
        {
            x += n / 4;
        }
        else
            x += (n / 4 + 1);
    }
    cout << x << " " << y << endl;
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