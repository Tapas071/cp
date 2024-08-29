

//-----Author - Tapas Mondal-------
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define ff first
#define ss second
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll

typedef vector<int> vi;
typedef vector<string> vs;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

// Code begins from here->

void solve()
{
     int n, q;
    cin>>n>>q;
    vector<int> nums;
    for( int i =0; i< n ; i++){
        int k ;
        cin>>k;
        nums.push_back(k);
    }
    vector<int> idx ( n , 0);
    while(q--){
        int l , r;
        cin>>l>>r;
        l--, r--;
        idx[l]++;
        if( r+1<n)idx[r+1]--;
    }   
    for( int i =1; i<n; i++){
        idx[i]+=idx[i-1];
    }

    sort(nums.begin(), nums.end());
    sort(idx.begin(), idx.end());
    long long ans =0;
    for( int i =0; i< n ;i++){

        ans +=( nums[i] * idx[i]);

    }
    cout<<ans<<endl;
    // int n;
    // cin >> n;
    // vector<int> num(n), temp(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> num[i];
    // }
    // int mx = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (mx < num[i])
    //         mx = num[i];
    //     temp[i] = mx;
    // }
    // int ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (num[i] < temp[i])
    //         ans++;
    // }
    // cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
