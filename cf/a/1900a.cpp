#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n ;
    cin>>n;
    string cell ="";
    cin>>cell;
    char prev='a';
    int ans =0;
    int ct=0;
    bool isThree= false;
    for(auto x : cell)
    {
       if(x =='.'){
            
                ct++;
                if(ct>2)isThree=true;
       }
       else{
        if(ct>1)ans+=2;
        else ans+=ct;
        ct=0;
       }
       prev =x;
    }
    
     if(ct>1)ans+=2;
     else ans+=ct;
     if(isThree){
        cout<<2<<endl;
        return ;
    }
     cout<<ans<<endl;
    
}

int main()
{
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
