#include<bits/stdc++.h>
using namespace std;
#define fl(X,N) for (int I = X;I < (int)(N);I++)
#define pb push_back
#define f first
#define s second

typedef vector<int> vi;

bool odd (long long int z){
    return z&1;
}
 
int main()
{

long long int t;
cin>>t;

while(t--){
    long long int n,k;
    cin>>n>>k;
    if (k==1){
        if(odd(n))
        { cout<<"OOD"<<endl;
        }
        else
        {
            cout<<"EVEN"<<endl;
        }
    }
    else if (k==2){
        cout<<"OOD"<<endl;
    }
    else
    {
        cout<<"EVEN"<<endl;
    }

}


return 0;
}