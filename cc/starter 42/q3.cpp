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


 
// Code Begin from here->


void solve(){
    int n;
    cin>>n;

    int a[n];
    
    fl(0,n){
        cin>>a[I];

    }

    int ct =0;

    fl(0,n){

        if(a[I]==1)ct++;
    }
    int k= abs(ct - (n-ct));
    if(k==0)cout<<0<<endl;   
     else if ((k%2) !=0)cout<<-1<<endl;
    else
    cout<<k/2<<endl;
}



 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ttc{
    solve();
}
 
return 0;
}