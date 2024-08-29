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
typedef vector<char> vs;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

// Code begins from here->
void solve()
{
    int n;
    cin >> n;

    string st;

    cin >> st;

    stack<char> sc;
    int ct1 = 0;
    int ct2 = 0;

    if (n % 2 == 0)
    {
        for (int i = 0; i < (n / 2); i++)
        {
            if (st[i] == ')')
                ct1++;
        }

        for (int i = n / 2; i < n; i++)
        {
            if (st[i] == '(')
                ct2++;
        }

        if (ct1 == ct2)
        {
            cout << ct1 + ct2 << endl;
        }
    }

    else
    {

        int ct1 = 0;
        int ct2 = 0;
        for (int i = 0; i < (n / 2); i++)
        {
            if (st[i] == ')')
                ct1++;
        }

        for (int i = n / 2; i < n; i++)
        {
            if (st[i] == '(')
                ct2++;
        }
        if ( ct1==ct2)cout<<ct1+ct2+1<<endl;
        if( ct1 %2==1 &&)
    }
}

// for(int i=0;i<n;i++){
// if(st[i]=='(') sc.push('(');
// else {
//     if( sc.empty()) ct++;
//     else sc.pop();

// }
// cout<<ct<<endl;

// }
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