#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n ;
    cin>>n;
    vector<pair<long long,long long>> points;
    for( long long i =0; i< n; i++){
        long long xi, yi;
        cin>>xi>>yi;
        points.push_back({xi,yi});
    }
    long long xs,ys, xt,yt;
    cin>>xs>>ys>>xt>>yt;

    long long d = (xs-xt)*(xs-xt) + (ys-yt)*(ys-yt);
    bool ans = true;
    for(auto x : points){
        long long xi = x.first;
        long long yi = x.second;
        long long d_p = (xi-xt)*(xi-xt) + (yi-yt)*(yi-yt);
        if(d>d_p)ans= false;
    }
    if( ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
 problem link :https://codeforces.com/problemset/problem/2002/C

 Status : unsolved

 problem statement : There are n
 circles on a two-dimensional plane. The i
-th circle is centered at (xi,yi)
. Initially, all circles have a radius of 0
.

The circles' radii increase at a rate of 1
 unit per second.

You are currently at (xs,ys)
; your goal is to reach (xt,yt)
 without touching the circumference of any circle (including the moment you reach (xt,yt)
). You can move in any direction you want. However, your speed is limited to 1
 unit per second.

Please determine whether this is possible.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤105
) — the number of circles.

The next n
 lines each contain two integers xi
, yi
 (1≤xi,yi≤109
) — the center of each circle.

The final line contains four integers xs
, ys
, xt
, yt
 (1≤xs,ys,xt,yt≤109
) — the coordinates of the starting point and the goal, respectively.

It is guaranteed that these n+2
 points are distinct.

It is guaranteed that the sum of n
 over all testcases does not exceed 105
.

Output
For each test case, output YES
 if it is possible to reach the goal without touching the circle boundaries, and output NO
 otherwise.

You can output Yes
 and No
 in any case (for example, strings yEs
, yes
, Yes
, and YES
 will be recognized as a positive response).


 Desired output :
YES
NO
YES
YES
YES
NO
YES





*/