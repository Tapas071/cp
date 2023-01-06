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
    int n;
    cin>>n;
    int k;

    int a[n];
    a[0]=1;
    int b[n];
    fl(0,n){
        cin>>b[i];
    }

    
    fl(0,n-1){
        if( b[i]==1 && a[i]==1){
            a[i+1]=2;
        }
        else if( b[i]==1 && a[i]==2){
            a[i+1]=1;
        }
        else if( b[i]==0 && a[i]==2){
            a[i+1]=2;
        }
        else
        { a[i+1]=1;
        }
    }
 
 if ( b[n-1]==1)k=2;
 else k=1;
 if( a[n-1]==k)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;

}
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ttc{
    solve();
}

 
return 0;
}