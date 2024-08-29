#include<bits/stdc++.h>
using namespace std;
void solve(){

    string a, b;
    cin>>a>>b;
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<a<<" "<<b<<endl;

    return;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w" , stdout);
#endif
    int t =1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}