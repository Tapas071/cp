
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

// powershell cmd to push into git:  git status; git add .; git commit -m "adding 1679a cf question from tle eliminator"; git push

// cmd prompt cmd to create a file and paste content to that directory:  copy a.cpp .\cf\a\abc.cpp

void solve()
{
 int n, op =0;
 cin>>n;
 vector<int> nums(n);
 for( int i=0;i< n; i++){
    cin>>nums[i];
 }
 reverse(nums.begin(), nums.end());
 for( int i =1; i< n; i++){
    int first = nums[i];
    int second = nums[i-1];
    // it 1
    // first 6
    // second 5
    while(first>=second){
        first /=2;
        op++;
        if(first ==1){
            if( i !=n-1){
                cout<<-1<<endl;
                return;
            }
            break;
        }
    }
    nums[i]= first;
 }
//  for( auto x : nums){
//     cout<<x<<" ";
//  }
//  cout<<endl;
 cout<<op<<endl;

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