//-----Author - Tapas Mondal-------
#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define f first
#define s second
#define pii pair<int, int>
#define sz(x) ((int)(x).size())
#define all(c) ((c).begin()), ((c).end())
#define fl(X,Y) for(int i =X;i<(int)(Y);i++)
#define ttc int t;cin>>t;while(t--)
typedef vector<int>vi;
typedef vector<string>vs;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
// Code begins from here->
void solve(){
    ll n;
    cin>>n;
    ll b[n];
    ll sum=0;
    vector<ll>v;
    fl(0,n){
        cin>>b[i];
        sum+=b[i];
    }

    fl(0,n){
        long long temp = b[i]-( sum/(n+1));
        v.pb(temp);
    }
    for(int it : v){
        cout<<it<<" ";
    }
    cout<<endl;




}
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ttc{
    solve();
}
 
return 0;
}