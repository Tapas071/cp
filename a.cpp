#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a , b, c;
    cin>>a>>b>>c;
    int first =a, second =b;
    if( c%2) first+= (c/2)+1;
    else first+= (c/2);
    second += (c/2);
    if(first==second)
        cout << "Second\n";
    else if(first>second)
        cout << "First\n";
    else
        cout << "Second\n";

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
