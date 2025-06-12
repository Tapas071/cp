#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int cut =0;
    if(n-a >= m-b){
        n = a;
        cut++;
    }
    else m = b;
    while( n!=1 and m!=1){
        if( n > m ){
            m/=2;
        }
        else n/=2;
        cut++;
    }
    cout<<cut<<endl;
    return ;

  
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
