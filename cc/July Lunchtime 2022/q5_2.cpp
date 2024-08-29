//-----Author - Tapas Mondal-------
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define ff first
#define ss second
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll

typedef vector<int> vi;
typedef vector<string> vs;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

// Code begins from here->

void solve()
{

    int n;
    cin >> n;

    vi v;

    rep(i, 0, n)
    {
        int temp;
        cin >> temp;

        v.pb(temp);
    }
    bool fl = false;
    sort(all(v));

    for (int j = 0; j < n; j++)
    {

        for (int i = 0; i < v[j]; i++)
        {

            if (!v.empty() && v.size() != 1)
            {
                v.pop_back();
                if (v.size() == 1)
                {
                    cout << j+1 << endl;
                    fl = true;
                    break;
                    
                }
            }
            else
            {
                cout << j+1 << endl;
                  fl = true;
                break;
              
            }
        }
        if (fl)
        {
            break;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {

        solve();
    }
    return 0;
}