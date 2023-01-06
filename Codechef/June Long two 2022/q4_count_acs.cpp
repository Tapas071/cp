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
    int p;
    cin>>p;
    int ans=0, k;
    int last_digit =p%10 ;
  int second_last;
  k = p - ( p%10);
  k /=10;
  second_last= k%10;

  if( second_last==0 && last_digit==0){
    ans = p/100;
  }
  else if ( last_digit==0 && second_last==1){
    if( p >100){
        ans=-1;
    }
    else 
    {
        ans=10;
    }
  }
  else if( second_last>1)ans=-1;
  else if (last_digit!=0 && second_last>0 )ans=-1;
  else 
  {
    if ( ((p/100)+(p%10))<=10)ans=((p/100)+(p%10));
    else ans=-1;
  }


cout<<ans<<endl;
    
}
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ttc{
    solve();
}
 
return 0;
}