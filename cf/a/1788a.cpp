#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, twoCount = 0;
    cin >> n;
    // cout<<n<<endl;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        // cout<<nums[i]<<" ";
        if (nums[i] == 2)
        {
            twoCount++;
        }
    }

    // cout << twoCount << " 2 count\n";
    if (twoCount % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }

    int ct = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == 2)
        {
            ct++;
        }
        if (ct == twoCount - ct)
        {
            cout << i + 1 << endl;
            return;
        }
    }

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
You are given a sequence a1,a2,…,an
. Each element of a
 is 1
 or 2
.

Find out if an integer k
 exists so that the following conditions are met.

1≤k≤n−1
, and
a1⋅a2⋅…⋅ak=ak+1⋅ak+2⋅…⋅an
.
If there exist multiple k
 that satisfy the given condition, print the smallest.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤100
). Description of the test cases follows.

The first line of each test case contains one integer n
 (2≤n≤1000
).

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤2
).

Output
For each test case, if there is no such k
, print −1
.

Otherwise, print the smallest possible k
.

*/
