#include<bits/stdc++.h>
using namespace std;
#define fl(X,N) for (int I = X;I < (int)(N);I++)
#define pb push_back
#define f first
#define s second
#define ttc int t;cin>>t;while(t--)
typedef vector<int> vi;

int main()
{
    ttc{
        int n,k;
        cin>>n>>k;
        if ( n%2==0){
          cout<<"YES"<<endl;
        }
        else
        {
            if(k==1){
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }


    }
 
return 0;
}