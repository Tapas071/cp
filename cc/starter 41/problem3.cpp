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

    int pa,pb,qa,qb;
    cin>>pa>>pb>>qa>>qb;
    if (max(pa,pb)> max(qa,qb)){
        cout<<"Q"<<endl;
    }
    else if (max(pa,pb)< max(qa,qb)){
        cout<<"P"<<endl;
    }
    else
    {
        cout<<"TIE"<<endl;
    }

}
 
return 0;
}