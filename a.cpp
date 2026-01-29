
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

void solve()
{
 int n,k ;
 cin>>n;
 cin>>k;
 vector<int> nums(n);
 for( int i =0;i <n ; i++){
    cin>>nums[i];
 }
 sort(nums.begin(),nums.end());
 int ct=1, maxCt=1;
 for( int i =1; i<n; i++){
    if(nums[i]-nums[i-1]<=k){
        ct++;
        maxCt= max( maxCt, ct);
    }
    else {
        ct=1;
    }
 }
 cout<<n-maxCt<<endl;
 
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
 nums = [1 ,3, 4]
 NUMS = [5,5,5]

 001
 011
 100
 110
    

*/