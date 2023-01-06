//-----Author - Tapas Mondal-------
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define f first
#define s second
#define pii pair<int, int>
#define sz(x) ((int)(x).size())
#define all(c) ((c).begin()), ((c).end())
#define fl(X, Y) for (int i = X; i < (int)(Y); i++)
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
    vi v;
    int ct = 0;
    int m4=0;

    fl(0, 2 * n)
    {
        int temp;
        cin >> temp;
        v.pb(temp);
        if (temp % 2 == 0){
            ct++;
        }
        if (temp%4==0){
            m4++;
        }

    }

    if ((ct-m4) > n) cout<<ct-m4-n<<endl;
    else cout<<n-<<endl;
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