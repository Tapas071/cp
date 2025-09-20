#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, x;
  cin>>n>>x;
  vector<int> w(n);
  for( int i =0;i< n ; i++){
    cin>>w[i];
  }
  sort(w.begin(), w.end());
  int start =0, end = n-1, boats=0;
  while(1){
    if(w[start]+ w[end]<=x){
        start++;
        end--;
        boats++;
    }
    else{
        end--;
        boats++;
    }
    if(start >end)break;
  }
  cout<<boats<<endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
