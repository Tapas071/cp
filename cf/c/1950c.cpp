#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    string hour = s.substr(0,2);
    string min = s.substr(2,3);
    int hourInt = stoi(hour);
    // cout<<hourInt<<endl;
    string ans ="";
    bool isAm =true;
    int reqAns = hourInt;
    if(hourInt>=12){
        isAm=false;
    }
    if(hourInt ==0){
        reqAns =12;
    }
    else if(hourInt>12){
        reqAns = hourInt -12;
    }
    if(reqAns<10){
        ans +="0";
        ans+= ('0' + reqAns);
    }
    else {
        ans += to_string(reqAns);
    }
    ans += min;
    if(isAm){
        ans += " AM";
    }
    else ans +=" PM";
    cout<<ans<<endl;
    

   

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
 problem link :https://codeforces.com/problemset/problem/1950/C

 Status : unsolved


*/

