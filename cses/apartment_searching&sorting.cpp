#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n,m,k;
  cin>>n>>m>>k;
  vector<int> desiredSize(n), apartmentSize(m);
  for(int i=0;i<n;i++){
    cin>>desiredSize[i];
  }
  for( int i =0; i<m; i++){
    cin>>apartmentSize[i];
  }
  sort(desiredSize.begin(),desiredSize.end());
  sort(apartmentSize.begin(), apartmentSize.end());

  int i=0, j=0, ans=0;

  while(true){
    if(desiredSize[i] +k < apartmentSize[j])i++;
    else if (desiredSize[i]-k> apartmentSize[j])j++;
    else {
        i++;
        j++;
        ans++;
    }
   
    if( i==n)break;
    if(j==m)break;
  }
  cout<<ans<<endl;
    return;
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
