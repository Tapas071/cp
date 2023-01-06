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
typedef vector<char>vs;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
// Code begins from here->
void solve(){
    string st;
    int n;
    cin>>n;
    vs v;
    cin>>st;
    for( int i=0;i<n;i++){
        if ( st[i]=='A') v.pb('T');
       else if ( st[i]=='T') v.pb('A');
        else if ( st[i]=='C') v.pb('G');
        else  v.pb('C');
    }

for( auto ch : v){
    cout<<ch;
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