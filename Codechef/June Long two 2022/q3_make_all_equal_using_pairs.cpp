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

int mostFrequent(int *arr, int n) {
  // code here
  int maxcount=0;
  int element_having_max_freq;
  for(int i=0;i<n;i++)
  {
    int count=0;
    for(int j=0;j<n;j++)
    {
      if(arr[i] == arr[j])
        count++;
    }
  
    if(count>maxcount)
    {
      maxcount=count;
      
    }
      
  }
  
  return maxcount;
}

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<n-mostFrequent(arr, n)<<endl;
}
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ttc{
    solve();
}
 
return 0;
}