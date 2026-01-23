
#include <bits/stdc++.h>
using namespace std;
// terminal cmd to run the code:  g++ .\a.cpp  .\a.exe

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (n == 1 or (n == a and n == b))
    {
        cout << "YES\n";
        return;
    }
    if (a + b + 1 >= n)
    {

        cout << "NO\n";
        return;
    }
    else
    {
        cout << "YES\n";
        return;
    }
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
p = [1,2];
q = [2,1];
a=  1 , b = 2;

*/