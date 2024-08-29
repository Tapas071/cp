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

        int n;
        cin>>n;
        int a[n];
       fl(0,n){
           cin>>a[I];
       }
     int max1 =INT_MIN;
     int max2=INT_MIN;
     
    fl(0,n){

        if(a[I]>max1){
          max2=max1;
          max1=a[I];
        }
        else if (a[I]>max2){
            max2=a[I];
        }
    }

    cout<<max1+max2<<endl;

    }
 



return 0;
}