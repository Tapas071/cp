#include <bits/stdc++.h>
using namespace std;
void solve()
{
   int w,h,n,wideCut=1, heightCut=1;
   cin>>w>>h>>n;
   while(w%2 ==0 ){
    wideCut *=2;
    w/=2;
   }
    while(h%2==0){
    heightCut *=2;
    h/=2;
   }
   if(heightCut * wideCut >= n)cout<<"YES\n";
   else cout<<"NO\n";

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
