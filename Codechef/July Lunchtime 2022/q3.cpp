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

bool printFrequency(string str)
{
    // Define an unordered_map
    unordered_map<char, int> M;
 
    // Traverse string str check if
    // current character is present
    // or not
    for (int i = 0; str[i]; i++)
    {

        // If the current characters
        // is not found then insert
        // current characters with
        // frequency 1
        if (M.find(str[i]) == M.end())
        {
            M.insert(make_pair(str[i], 1));
        }
 
        // Else update the frequency
        else
        {
            M[str[i]]++;
        }
    }
 
    // Traverse the map to print the
    // frequency
    for (auto& it : M) {
        // cout << it.first << ' ' << it.second << '\n';

        if( it.second & 1){
            return false;
        }
    }

    return true;
}
 
void solve(){
 
int n;
cin>>n;
string s;

cin>>s;
bool flag=false;


if(printFrequency(s) ){

    rep( i,0,n-1){
        rep( j,i+1,n){
            if( s[i]==s[j]){
                if( (j-i)%2==0){
                    flag =true;
                    break;
                }
                else {
                    break;
                }

            }
        }

        if( flag){
            break;
        }
    }

    if(flag){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }


}

else {
    cout<<"NO"<<endl;
}

 
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