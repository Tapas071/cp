#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,k, sum =0;
    cin>>n>>m>>k;
    vector<int>a , q;
    for( int i =0; i<m; i++){
        int val;
        cin>>val;
        a.push_back(val);
    }
    for( int i =0; i<k; i++){
        int val;
        cin>>val;
        q.push_back(val);
        sum+=val;
    }
    if(n==k){
        string ans ="";
        for(int i =0; i<m;i++){
            ans+='1';
        }
        cout<<ans<<endl;
        return;
    }
    if(n-k==1){
        string ans ="";
        int breakingVal = (n*(n+1))/2 - sum;
        for( int i =0; i<m;i++){
            if(a[i]==breakingVal){
                ans+='1';
            }
            else ans+='0';
        }
        cout<<ans<<endl;
        return;

    }
    string ans ="";
    for( int i =0; i< m; i++){
            ans +='0';
    }
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
 problem link :https://codeforces.com/problemset/problem/2002/A

 Status : unsolved


*/

