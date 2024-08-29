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
const int      N=1e5;
const int32_t    MM=998244353;
 
// Code begins from here->
int printFrequency(vector<int> vec , int single)
{
    // Define an map
    map<int, int> M;
 
    // Traverse vector vec check if
    // current element is present
    // or not
    for (int i = 0; vec[i]; i++) {
 
        // If the current element
        // is not found then insert
        // current element with
        // frequency 1
        if (M.find(vec[i]) == M.end()) {
            M[vec[i]] = 1;
        }
  
        // Else update the frequency
        else {
            M[vec[i]]++;
        }
    }
 
    // Traverse the map to print the
    // frequency
    for (auto& it : M) {
        // cout << it.first << ' '
        //      << it.second << '\n';

        if( it.second==1){
            single ++;
        }


    }

    return single;
}
 


void countFreq(int arr[], int n, int single, int multi)
{
    // Mark all array elements as not visited
    vector<bool> visited(n, false);

    
  
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++) {
  
        // Skip this element if already processed
        if (visited[i] == true)
            continue;
  
        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        // cout << arr[i] << " " << count << endl;
        if( count==1)
        {
            single++;
        }

        if( count>2){
            multi++;
        }
    }
}
 
void solve(){

    int n,k;
  int single=0, multi=0;

    cin>>n;

vi v;

    rep( i, 0,n){
       int temp;
       cin>>temp;
       v.push_back(temp);
    }

    // countFreq( a, n,single, multi);

   if(  printFrequency(v,0)%2==0)
   {
    cout<<printFrequency(v,0)/2<<endl;

   }

else 
{
    cout<<(printFrequency(v,0)/2)+1<<endl; 
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