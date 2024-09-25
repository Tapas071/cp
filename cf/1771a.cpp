#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> nums(n);
	long long maxVal =INT_MIN, ans =0, minVal = INT_MAX;
	unordered_map<int,int> m;
	for(int i =0; i< n; i++){
	cin>>nums[i];
	if( nums[i]>= maxVal) maxVal = nums[i];
	if( nums[i]<= minVal) minVal = nums[i];
	m[nums[i]]++;
	
	}
	int maxDif =  maxVal - minVal;
	for(auto x : nums){
	if(maxDif!=0)ans+=(m[x+maxDif] + m[x-maxDif]);
	else ans+= (m[x]-1);
	
	
	}
	cout<<ans<<endl;

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
 problem link :https://codeforces.com/problemset/problem/2002/A

 Status : unsolved


*/

