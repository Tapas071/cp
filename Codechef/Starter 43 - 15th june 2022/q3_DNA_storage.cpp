//-----Author - Tapas Mondal-------
#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define f first
#define s second
#define pii pair<int, int>
#define sz(x) ((int)(x).size())
#define all(c) ((c).begin()), ((c).end())
#define ttc int t;cin>>t;while(t--)
typedef vector<int>vi;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
// Code begins from here->
void solve(){
    int n;
    cin>>n;
    string st;
    cin>>st;

    for(int i=0;i<n;i=i+2){

        if(st[i]=='0'){
            if(st[i+1]=='0') cout<<"A";
            else cout<<"T";
        }
        else 
        {
            if(st[i+1]=='0')cout<<"C";
            else cout<<"G";
        }
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