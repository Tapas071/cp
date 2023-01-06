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
    long long int n, x,y,k=0,co=1;
    cin>>n;
    int  a[n];
    k=n;
    a[n-1]=n;
    fl(1,n){
        if(I%2!=0){
            a[n-1-I]=k-(n-I);
            k=a[n-1-I];

        }
        else if (I%2==0){
            a[n-1-I]=k+(n-I);
            k=a[n-1-I];
        }
    }
    fl(0,n){
        cout<<a[I]<<" ";
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