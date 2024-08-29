#include<bits/stdc++.h>
using namespace std;
void solve (){
    int h, m;
    cin>>h>>m;
    cout<<(24-h)*60 - m<<endl;
    return ;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t =1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}