#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n ,mx  =INT_MIN; 
    cin>>n;
    unordered_set<int>s;
    vector<int> nums(n);
    for( int i =0; i< n; i++){
        int val ;
        cin>>val;
        s.insert(val);
        mx = max( mx,val);
        nums[i]=val;
    }
    if(s.size()==1){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
        for( int i =0; i< n ; i++){
            if(mx ==nums[i]){
                cout<<1<<" ";
            }
            else cout<<2<<" ";
        }
        cout<<endl;
    }
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
