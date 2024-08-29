//-----Author - Tapas Mondal-------
#include <bits/stdc++.h>
using namespace std;


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

int highestPowerof2(int n)
{
    int res = 0;
    for (int i = n; i >=1; i--)
    {
        if (i & (i - 1) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}



signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {

        long  n;
        cin >> n;

        long arr[n + 1];
       for( int i=0;i<=n;i++)
        {
            cin >> arr[i];
        }

        int ans[3] = {0, 0, 0};

        for (int i = highestPowerof2(n); i > 0; i /= 2)
        {
            long diff = arr[i] - arr[0];
            if (diff < 0)
            {
                diff *= -1;
                int ct = diff / i;
                if (ct == 1)
                {
                    ct = 2;
                    if ((ans[0] ^ i) <= n)
                    {
                        ans[0] ^= i;
                        ct--;
                    }
                    if (ct && (ans[1] ^ i) <= n)
                    {
                        ans[1] ^= i;
                        ct--;
                    }
                    if (ct > 0 && (ans[2] ^ i) <= n)
                    {
                        ans[2] ^= i;
                    }
                }
                else if (ct == 3)
                {
                    ans[0] ^= i;
                    ans[1] ^= i;
                    ans[2] ^= i;
                }
            }
            else
            {
                int ct = diff / i;
                if (ct == 1)
                {
                    if ((ans[0] ^ i) <= n)
                        ans[0] ^= i;
                    else if ((ans[1] ^ i) <= n)
                        ans[1] ^= i;
                    else
                        ans[2] ^= i;
                }
            }

            sort(ans, ans + 3);
        }
        printf("%d %d %d\n", ans[0], ans[1], ans[2]);
    }
    return 0;
}