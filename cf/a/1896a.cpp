#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n ;
    cin>>n;
    vector<int> nums(n);
    for( int i =0; i< n;  i++){
        cin>>nums[i];
        
    }
    if( nums[0]==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main()
{
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
You are given a permutation†
 𝑎
 of size 𝑛
. You can do the following operation

Select an index 𝑖
 from 2
 to 𝑛−1
 such that 𝑎𝑖−1<𝑎𝑖
 and 𝑎𝑖>𝑎𝑖+1
. Swap 𝑎𝑖
 and 𝑎𝑖+1
.
Determine whether it is possible to sort the permutation after a finite number of operations.

†
 A permutation is an array consisting of 𝑛
 distinct integers from 1
 to 𝑛
 in arbitrary order. For example, [2,3,1,5,4]
 is a permutation, but [1,2,2]
 is not a permutation (2
 appears twice in the array) and [1,3,4]
 is also not a permutation (𝑛=3
 but there is 4
 in the array).

Input
Each test contains multiple test cases. The first line contains the number of test cases 𝑡
 (1≤𝑡≤5000
). Description of the test cases follows.

The first line of each test case contains a single integer 𝑛
 (3≤𝑛≤10
) — the size of the permutation.

The second line of each test case contains 𝑛
 integers 𝑎1,𝑎2,…,𝑎𝑛
 (1≤𝑎𝑖≤𝑛
) — the elements of permutation 𝑎
.

Output
For each test case, print "YES" if it is possible to sort the permutation, and "NO" otherwise.

You may print each letter in any case (for example, "YES", "Yes", "yes", "yEs" will all be recognized as positive answer).

Example
InputCopy
6
3
1 2 3
5
1 3 2 5 4
5
5 4 3 2 1
3
3 1 2
4
2 3 1 4
5
5 1 2 3 4
OutputCopy
YES
YES
NO
NO
NO
NO


*/
