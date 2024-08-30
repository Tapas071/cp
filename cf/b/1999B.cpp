#include <bits/stdc++.h>
using namespace std;
bool isSumitWon (int a1,int a2,int  b1,int b2){
    int s=0;
    if(a1>b1)s++;
    else if(a1<b1)s--;
    if(a2>b2)s++;
    else if(a2<b2)s--;

    if(s>0)return true;
    else return false;
}
void solve()
{
    int a1, a2, b1, b2;
    cin>>a1>>a2>>b1>>b2;
    int ans =0;
    if(isSumitWon(a1,a2 , b1, b2))ans++;
    if(isSumitWon(a1,a2 , b2, b1))ans++;
    if(isSumitWon(a2,a1 , b1, b2))ans++;
    if(isSumitWon(a2,a1 , b2, b1))ans++;

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
 problem link :https://codeforces.com/problemset/problem/1999/B

 Status : solved

 problem 


*/