#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<char>v;
    for(int i =0; i<n; i++){
        char ch;
        cin>>ch;
        v.push_back(ch);
    }
    for( int i =0; i< n; i+=4){
        for( int j=i;j+4< n ; j++){
            

        }
    }
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



*/