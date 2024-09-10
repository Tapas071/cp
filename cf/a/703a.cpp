#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n ;
    cin>>n;
    int c =0, m=0;
    for(int i =0; i<n ; i++){
        int mm,cc;
        cin>>mm>>cc;
        if( mm>cc)m++;
        else if(mm<cc)c++;
        

    }
    if( m<c)cout<<"Chris"<<endl;
    else if(m>c)cout<<"Mishka"<<endl;
    else
        cout << "Friendship is magic!^^"<<endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
 problem link :https://codeforces.com/problemset/problem/703/A

 Status : unsolved


*/