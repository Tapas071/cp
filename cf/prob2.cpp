#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,a,b,c;
    cin>>n>>a>>b>>c;
    long long sum = (a+b+c);
    long long days = (n/sum)*3;
    n -= (n/sum)*sum;
    if(n >0){
        days++;
        n -=a;
    }
    if(n>0){
        days++;
        n-=b;
    }
    if(n>0){
        days++;
        n -=c;
    }
    cout<<days<<endl;


   

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
 problem link :https://codeforces.com/problemset/problem/2002/A

 Status : unsolved


*/

