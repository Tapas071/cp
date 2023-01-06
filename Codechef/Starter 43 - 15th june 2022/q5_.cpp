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
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
// Code begins from here->
void solve(){
    int n,x;
    cin>>n>>x;
    if(x>ceil(n*1.0/2)){
        cout<<"-1"<<endl;
    }
    else {
        vector<char>v;
        fl(0,n/2){
            v.push_back((char)('a'+I%x));
        }
        fl(0,n/2){
            cout<<v[I];
        }
        if(n%2){
            cout<<(char)('a'+(n/2)%x);
        }
        for(int i =n/2 -1 ; i>=0;i--){
            cout<<v[i];
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