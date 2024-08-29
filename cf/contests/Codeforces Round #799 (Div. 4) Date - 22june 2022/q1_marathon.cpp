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
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    vi v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    int ct=0;
    for(auto x : v){
        if(x>a){
            ct++;
        }
    }
    cout<<ct<<endl;

}

 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ttc{

    solve();
}
 
return 0;
}