
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (x == 1)
    {
        if (k == 1)
        {
            cout << "NO\n";
        }
        else if (k == 2)
        {
            if (n % 2 == 1)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
                cout << n / 2 << endl;
                for (int i = 0; i < n / 2; i++)
                {
                    cout << "2" << " ";
                }
                cout << endl;
            }
        }
        else if (n % 2 == 1)
        {
            cout << "YES\n";
            cout << 1 + ((n - 3) / 2) << endl;
            cout << 3 << " ";
            for (int i = 0; i < ((n - 3) / 2); i++)
            {
                cout << "2" << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "YES\n";
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++)
            {
                cout << "2" << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "YES\n";
        cout << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "1" << " ";
        }
        cout << endl;
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

/*


*/