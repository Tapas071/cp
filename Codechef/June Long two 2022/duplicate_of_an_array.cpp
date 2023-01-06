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
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arrA[50];
    vector<int> v;

    int n, ct = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arrA[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arrA[i] == arrA[j])
            {
                v.push_back(arrA[i]);
            }
        }
    }

    for (auto ele : v)
    {
        cout << ele << " ";
    }

    return 0;
}