#include <bits/stdc++.h>
using namespace std;
void solve()
{
  long long n , k,sum=0, minVal =INT_MAX, maxVal = INT_MIN;
  cin>>n>>k;
  vector<long long> a(n);
  unordered_map<long long , long long>m;
  for( int i =0; i< n; i++){
    cin>>a[i];
    sum+=a[i];
    minVal= min(a[i], minVal);
    
    maxVal = max( a[i], maxVal);
    m[a[i]]++;
  }
  if( maxVal - minVal  > k+1){
    cout<<"Jerry"<<endl;
    return;
  }
  if( (maxVal - minVal )== k+1 and m[maxVal] >1 ){
    cout<<"Jerry"<<endl;
    return ;
  }
  if( sum %2 ==0){
    cout<<"Jerry"<<endl;
  }
  else cout<<"Tom"<<endl;
  return;


}

int main()
{
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
