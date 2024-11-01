#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    int firstsum =0, lastsum=0;
    for(int i =0;i< s.size();i++){
        if(i==0 or i==1 or i==2){
            firstsum+= (s[i]-'0');
        }
        if(i==n-1 or i==n-2 or i==n-3){
            lastsum+= (s[i]-'0');
        }

    }
    if( lastsum == firstsum)cout<<"YES"<<endl;
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
 problem link :https://codeforces.com/problemset/problem/1676/A

 Status : unsolved


*/

