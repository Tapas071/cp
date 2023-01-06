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

bool frequencyOfEach(int* arr, int n)
{
    // finding maximum element in array
    int max = *max_element(arr, arr + n);
 
    // make hash array of size equal to maximum
    // element in array
    int hash[max + 1] = { 0 };
 
    /* Counting frequency of each element of array
       and storing it in hash*/
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
 
    // printing frequency of elements
    for (int i = 0; i <= max; i++) {
 
        /* If hash[i] has stored any value
           i.e element has occurred atleast
           once in array */

           if(hash[i] !=0){
            if( hash[i]!=i) return false;
           }
    }
    return true;
}

 
void solve(){
 
int n,ct=0;
cin>>n;

int arr[n];



rep(i,0,n){
    cin>>arr[i];

}

if(frequencyOfEach(arr,  n))cout<<"YES"<<endl;
else cout<<"NO"<<endl;


 
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