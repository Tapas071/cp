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
typedef vector<string> vs;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

// Code begins from here->
void solve()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> pfix(n);
    vector<int> sfix(n);
    pfix[0] = v[0];
    sfix[n - 1] = v[n - 1];

    for (int i = 1; i < n; i++)
    {
        pfix[i] == __gcd(pfix[i - 1], v[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        sfix[i] = __gcd(sfix[i + 1], v[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int final_p = ((i - 1) >= 0 ? pfix[i - 1] : 0);
        int final_s = ((i + 1) < n ? sfix[i + 1] : 0);

        if (__gcd(final_p, final_s) > 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ttc
    {
        solve();
    }

    return 0;
}