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
int decimalToBinary(int N)
{
 
    // To store the binary number
    ull B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
 
        // Count used to store exponent value
        cnt++;
    }
 
    return B_Number;
}

void solve()
{
    ll a1, b1, n;
    cin >> a1 >> b1 >> n;

    vi v;

    int a = decimalToBinary(a1);
int b = decimalToBinary(b1);
    if (a1 == b1)
    {
        cout << 0 << endl;
    }





    else
    {

        while (a != 0 || b != 0)
        {

            if (a % 10 == 1 && b % 10 == 1)
            {
                v.pb(0);
                a = a / 10;
                b = b / 10;
            }
            else if (a % 10 == 0 && b % 10 == 0)
            {
                v.pb(0);
                a = a / 10;
                b = b / 10;
            }
            else if (a % 10 == 1 && b % 10 == 0)
            {
                v.pb(1);
                a = a / 10;
                b = b / 10;
            }
            else
            {
                v.pb(1);
                a = a / 10;
                b = b / 10;
            }

           
        }

         int sum = 0;
            for (int i = 0; i < v.size(); i++)
            {
                sum = sum + (pow(2, i) * v[n - 1 - i]);
            }
        

        if (sum >= n)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
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