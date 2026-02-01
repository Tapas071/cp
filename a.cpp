
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe
// powershell cmd to push into git:  git status; git add .; git commit -m "adding a few cf question"; git push

void solve()
{
 int n;
 cin>>n;
 vector<int> nums(n);
 for( int i =0;i< n; i++){
    cin>>nums[i];
    if(nums[i]==1)nums[i]++;
 }
 
 for( int i =0; i<n-1;i++){
    if( nums[i+1]%nums[i] == 0){
        nums[i+1]++;
    }
 }
for( int i =0; i< n; i++)
{
    cout<<nums[i]<<" ";
}
cout<<endl;
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
1828b.cpp

3 1 2

1 3 2
1 2 3
k =1

3 4 1 2

1 4 3 2
1 2 3 4
k = 2

4 2 6 7 5 3 1

1 6 7 4 9 2 3 8 5

1 5 3 4 2 6






*/