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
    int n,x;
    cin>>n>>x;
    int arr[n];
    fl(0,n){
        cin>>arr[I];
    }
    bool ans =true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if(arr[i]+arr[i+1]<=x){
                swap(arr[i],arr[i+1]);
            }
            else 
            {
                ans =false;
                break;
            }
        }
    }
    if (ans==true){
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
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