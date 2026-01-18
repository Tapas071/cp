#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int operation = 0, positive = 0, negative = 0;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k == 1)
            positive++;

        else
            negative++;
    }
    //  cout<<"  "<< positive <<" -- "<<negative<<endl;
    while (positive < negative or negative % 2)
    {
        negative--;
        positive++;
        operation++;
    }
    cout << operation << endl;

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
