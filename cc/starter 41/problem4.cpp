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
    int x,y;
    cin>>x>>y;

    if ( y>x){

        cout<<y-x<<endl;
    }
    else if(x==y)
    {
cout<<0<<endl;
    }
    else
    {
        if((x+y)%2==0){
            cout<<(x-y)/2<<endl;
        }
        else
        {
            cout<<((x-y)/2)+2<<endl;
        }
    }


}
 
return 0;
}