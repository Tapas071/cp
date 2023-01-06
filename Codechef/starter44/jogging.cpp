//-----Author - Tapas Mondal-------
#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define f first
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
}
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ttc{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int j =n-1;
    int ans =0;
    while(i<=j){
        if(s[i]=='(' && s[j]==')'){
            i++;
            j--;
        }
        else if( s[i]=='(' && s[j]=='('){
            ans++;
            j--;
        }
        else if (s[i]==')' && s[j]==')'){
            ans++;
            i++;
        }
        else {
            ans +=2;
            i++;
            j--;
        }
    }
    cout<<ans<<endl;

}

 
return 0;
}