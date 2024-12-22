#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    long long odsum =0, evsum=0, odct=0, evct=0;
    for( int i =0; i<n; i++)
    {
        int k ;
        cin>>k;
        if(i%2==0){
            evsum+=k;
            evct++;
        }
        else{
            odct++;
            odsum += k;
        }
    }
    if(evsum%evct==0 and odsum%odct ==0 and (evsum/evct == odsum/odct))cout<<"YES"<<endl;
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
 problem link :https://codeforces.com/problemset/problem/2002/A

 Status : unsolved


*/

