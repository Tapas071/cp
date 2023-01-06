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
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
// Code begins from here->
bool areEqual(int arr1[], int arr2[], int n, int m)
{
    // If lengths of array are not equal means
    // array are not equal
    if (n != m)
        return false;
 
    // Sort both arrays
 
    // Linearly compare elements
    for (int i = 0; i < n; i++)
        if (arr1[i] != arr2[i])
            return false;
 
    // If all elements were same.
    return true;
}
void solve(){
    int n;
    cin>>n;
    int a[n];
    int k[n];
    int j[n];
    fl(0,n){

        cin>>a[I];
        k[I]=a[I];
        j[I]=a[I];



    }
    

    sort(k,k+n,greater<int>());
    sort(j,j+n);

    if(areEqual(a,k,n,n) || areEqual(a,j,n,n))
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ttc{

    solve();
}
 
return 0;
}