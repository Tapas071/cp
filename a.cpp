
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

// powershell cmd to push into git:  git status; git add .; git commit -m "adding 1606a cf question from tle eliminator"; git push

// cmd prompt cmd to create a file and paste content to that directory:  copy a.cpp .\cf\a\1606a.cpp
long long powerOfTwo(long long x){
    if(x==0)return 1;
    if(x==1)return 2;
    if( x%2==1){
        return x * powerOfTwo(x-1);
    }
    return powerOfTwo(x/2) * powerOfTwo(x/2);
}
vector<int> segment;
void build(int arr[], int l, int r, int idx){
    if(l==r){
        segment[idx]=arr[idx];
        return;
    }
    int mid = l + (r-l)/2;
    build(arr,l,mid,2*idx+1); // left
    build(arr, mid+1, r, 2*idx +2); // right
    segment[idx] = segment[2*idx +1] + segment[2*idx +2]; // merge
}


void solve()
{
 long long n, oneCt =0, zeroCt =0 ;
 cin>>n;
 for( int i =0; i< n; i++){
    int k;
    cin>>k;
    if( k==1)oneCt++;
    else if(k==0)zeroCt++;
 }
 int arr[] ={1,2,3,4,6};
 int n = 5;
 build(arr,0,5,0);
 segment = vector<int>(4*n);
 cout << (oneCt) * (powerOfTwo( zeroCt)) << endl;

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

/*

*/