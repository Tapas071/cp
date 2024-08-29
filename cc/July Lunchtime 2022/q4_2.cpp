//-----Author - Tapas Mondal-------
#include<bits/stdc++.h>
using namespace std;
 
 
#define int             long long
#define pb              push_back
#define ppb             pop_back
#define pf              push_front
#define ppf             pop_front
#define all(x)          (x).begin(),(x).end()
#define uniq(v)         (v).erase(unique(all(v)),(v).end())
#define sz(x)           (int)((x).size())
#define ff              first
#define ss              second
#define pii             pair<int, int>
#define rep(i,a,b)      for(int i =a;i<b;i++)
#define mem1(a)         memset(a,-1,sizeof(a))
#define mem0(a)         memset(a,0,sizeof(a))
#define ppc             __builtin_popcount
#define ppcll           __builtin_popcountll
 
typedef vector<int>vi;
typedef vector<string>vs;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
const long long  INF=1e18;
const int32_t    M=1e9+7;
const int32_t    MM=998244353;
 
// Code begins from here->
 
void solve(){
 
int n;
cin>>n;
vi a;
vi b;

rep( i,0,n){
    int temp;
    cin>>temp;
    a.pb(temp);
}
rep( i,0,n){
    int temp2;
    cin>>temp2;
    b.pb(temp2);
}

sort(all(a), greater<int>());
sort(all(b), greater<int>());

for( int i=0;i<(n/2);i++){
    a.pop_back();
    b.pop_back();
}


reverse(all(a));

vi k;

for( int i=0;i<(n/2)+1;i++){
    int x = a[i]+b[i];
    k.pb(x);
}

sort( all(k));

int m=*min_element(all(k));

cout<<m<<endl;
 
}
 
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--)
{
 
solve();
 
}
return 0;
}