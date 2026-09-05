#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ b.cpp -o a.exe ; .\a.exe
// powershell cmd to push into git:  git status; git add .; git commit -m "adding a few cf question"; git push

void solve()
{
    int n ;
    cin>>n;
    vector<int> nums;
    unordered_map<int,int> m;
    for( int i=0; i< n; i++){
        int k;
        cin>>k;
        nums.push_back(k);
        m[k]++;
    }
    for( int i =0; i<n; i++){
        // cout<<m[nums[i]]<<" ";
        if( m[nums[i]]>1){
            cout<<-1<<endl;
            return;
        }
    }
    // cout<<endl;
    sort(nums.begin(), nums.end(), greater<int>());
    for( int i =0; i< n; i++){
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
