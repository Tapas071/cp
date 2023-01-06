#include<bits/stdc++.h>
using namespace std;

#define fl(X,N) for (int I = X;I < (int)(N);I++)
#define pb push_back
#define f first
#define s second
#define ttc int t;cin>>t;while(t--)
typedef long long ll;
typedef vector<int> vi;

// AUthor - Tapas Mondal 
// Date - 5th June 2022j
                               
                                 /* Code Starts from here */  


 
int main()
{
 

 ttc{
  int n,x;
  cin>>n>>x;

  if ( (n/(x))%3==0){
      cout<<n/(3*x)<<endl;
  }
  else
  {
      cout<<(n/(3*x))-1<<endl;
  }

 }



return 0;
}