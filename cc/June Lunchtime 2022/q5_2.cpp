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
    int a, b;
    cin>>a>>b;
    int n;
    cin>>n;
    int x=a^b;
    int digits=0;
    int temp=n;
    while(temp>0){
        digits++;
        temp/=2;
    }
    int z=1;
    while(digits--){
        z=z<<1;
    }
    z=z-1;

    if(a==b){
        cout<<"0"<<endl;
    }
    else if( x>z){
        cout<<"-1"<<endl;
    }
    else if( x<=n-1){
        cout<<"1"<<endl;
    }
    else 
    {
        cout<<"2"<<endl;
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