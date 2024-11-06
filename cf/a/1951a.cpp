#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool fl= false;
    int ct=0;
    for(int i =0; i< s.size();i++){
        char x = s[i];
        if(i!=0){
            if( s[i-1]=='1' and x=='1')fl=true;
        }
        if(x=='1')ct++;
    }
    if( fl and ct==2)cout<<"NO"<<endl;
    else if(s!="11" and ct%2==0)cout<<"YES"<<endl;
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

