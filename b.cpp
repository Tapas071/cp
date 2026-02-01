#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ b.cpp -o a.exe ; .\a.exe
// powershell cmd to push into git:  git status; git add .; git commit -m "adding a few cf question"; git push

void solve()
{
    long long n, q, sum=0;
    cin >> n>>q;
    vector<int> nums(n);
    vector<int> pre_sum;
    pre_sum.push_back(0);
    
    for( int i =0; i< n; i++){
        cin>>nums[i];
        sum+=(nums[i]%2);
        // sum %=2;
        pre_sum.push_back(sum);
    }
    // for( auto x : pre_sum)cout<<x<<" ";
    // cout<<endl;
    for( int i=0; i<q;i++){
        int l, r,k;
        cin>>l>>r>>k;
        if((r-l+1)%2==0){
            k=0;
        }else{
            if (k % 2 == 0)
            {
                k = 0;
            }
            else k=1;
        }
        int totalVal = pre_sum[l];
        // cout<<totalVal<<endl;
        totalVal += pre_sum[n]-pre_sum[r];
        // cout << totalVal << endl;
        totalVal += k;
        if(totalVal %2==1){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
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
