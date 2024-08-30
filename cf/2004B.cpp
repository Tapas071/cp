#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l,r , L, R;
    cin>>l>>r;
    cin>>L>>R;
    int ans=1;
    // doesn't intersect
    if( L >= r and L >= l){
        cout<<"case 1"<< " ";
        ans =1;
    }
    else if(l>=R and l>=L){
         ans =1;
         cout << "case 2" << " ";
    }
    //  completely one into another
    else if(l>= L  and R >= r){
        ans = (r-l)+1;
        cout << "case 3" << " ";
    }
    else if(L>= l  and r >= R){
        ans = (R-L)+1;
        cout << "case 4" << " ";
    }
    // sub-overlap
    else if(l>=L and r>= R){
        ans = (R-l);
        cout << "case 5" << " ";
    }
    else if(L>=r and R>= r){
        ans = (r - L);
        cout << "case 6" << " ";
    }
    cout<<ans<<endl;

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
 problem link :https://codeforces.com/problemset/problem/2004/B

 Status : unsolved

 problem statement : There are 100
 rooms arranged in a row and 99
 doors between them; the i
-th door connects rooms i
 and i+1
. Each door can be either locked or unlocked. Initially, all doors are unlocked.

We say that room x
 is reachable from room y
 if all doors between them are unlocked.

You know that:

Alice is in some room from the segment [l,r]
;
Bob is in some room from the segment [L,R]
;
Alice and Bob are in different rooms.
However, you don't know the exact rooms they are in.

You don't want Alice and Bob to be able to reach each other, so you are going to lock some doors to prevent that. What's the smallest number of doors you have to lock so that Alice and Bob cannot meet, regardless of their starting positions inside the given segments?

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two integers l
 and r
 (1≤l<r≤100
) — the bounds of the segment of rooms where Alice is located.

The second line of each test case contains two integers L
 and R
 (1≤L<R≤100
) — the bounds of the segment of rooms where Bob is located.

Output
For each test case, print a single integer — the smallest number of doors you have to lock so that Alice and Bob cannot meet, regardless of their starting positions inside the given segments.

desired output :
1
3
2
3

input :

4
1 2
3 4
2 5
2 5
3 7
6 7
4 5
2 8


*/