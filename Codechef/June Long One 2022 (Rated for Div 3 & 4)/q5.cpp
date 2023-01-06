//-----Author - Tapas Mondal-------
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define f first
#define s second
#define pii pair<int, int>
#define sz(x) ((int)(x).size())
#define all(c) ((c).begin()), ((c).end())
#define fl(X, Y) for (int I = X; I < (int)(Y); I++)
#define ttc   \
    int t;    \
    cin >> t; \
    while (t--)
typedef vector<int> vi;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

// Code begins from here->
void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ttc
    {
        ll n, x, y, i, k, co = 0;
        cin >> n;
        string a, b, c = " ";
        cin>>a>>b;
        fl(0, n)
        {
            if (a[I] == b[I])
            {
                co += 1;
            }
            else
            {
                k += 1;
                c += b[I];
            }
        }
        sort(c.begin(), c.end());
        int ans = 0;
        fl(0, c.size() - 1)
        {
            if (c[I] != c[I + 1])
            {
                ans += 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}