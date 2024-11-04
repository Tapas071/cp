#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int mihai =0, bianca=0;
    bool ans=false;
     for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        if(k%2){
            mihai += k;
        }
        else bianca+=k;
    }
        if(mihai<bianca) ans =true;
        if (mihai < bianca)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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

/*
 problem link :https://codeforces.com/problemset/problem/1807/A

 Status : unsolved


*/

