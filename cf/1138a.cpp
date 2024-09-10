#include <bits/stdc++.h>
using namespace std;
void solve()
{
    // int n, m, k;
    // cin >> n >> m >> k;
    // cout << min(n, k) * min(m, k) << endl;

    vector<int>arr = {1,2, 4, 8, 10, 12 , 15};

    int n = arr.size();
    int target = 10;

    int lp = 0, rp = n-1;
    while( lp<=rp){
        int mid= (lp+rp)/2;

        if( arr[mid]==target){
            cout<<" target has been found";
            // return ;
            break;
        }
        else if( arr[mid]> target){
            rp =mid-1;
        }
        else {
            lp = mid+1;
        }
           
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

/*
 problem link :https://codeforces.com/problemset/problem/1138/A

 Status : unsolved


*/