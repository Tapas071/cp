//-----Author - Tapas Mondal-------
#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define f first
#define s second
#define pii pair<int, int>
#define sz(x) ((int)(x).size())
#define all(c) ((c).begin()), ((c).end())
#define fl(X,Y) for(int I =X;I<(int)(Y);I++)
#define ttc int t;cin>>t;while(t--)
typedef vector<int>vi;
typedef vector<string>vs;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
// Code begins from here->
void solve(){
    int n;
    cin>>n;

if( n==3){
    cout<<"010"<<endl;
}
else if( n==4){
    cout<<1001<<endl;
}

else {


    vi v;
    v.pb(1);
    v.pb(0);
    for(int i=2;i<=(n-3);i++){
        v.pb(0);
    }
    v.pb(0);
    v.pb(1);

    for(auto x : v){
        cout<<x;
    }
    cout<<endl;
}

}
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

 ttc{
    solve();
 }
return 0;
}