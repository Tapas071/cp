
#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

// in linux terminal: g++ a.cpp -o a && ./a

// powershell cmd to push into git:  git status; git add .; git commit -m "adding 1606a cf question from tle eliminator"; git push

// cmd prompt cmd to create a file and paste content to that directory:  copy a.cpp .\cf\a\1606a.cpp

int recur( vector<int>& arr, int i, int dp[] ){
	if(i==0)return arr[0]>0? arr[0] : 0;
	if(i<0)return 0;
	// take
	if(dp[i]!=-1)return dp[i];
	// not take
		return dp[i]=max(recur(arr, i-1,dp), arr[i] +recur(arr, i-2, dp));



}


void solve(){
	vector<int> arr = {1,4,2,-10,10,5};
	// state  i
	int dp[6];
	memset(dp, -1, sizeof(dp));
	
	int ans = recur(arr, 5, dp);
	cout<<ans<<endl;

	// tabulation
	 vector<int> tab(6);
	 tab[0] = max(0, arr[0]);
	for( int i =1; i< 6; i++){
		if(i>1){
			tab[i] = max(arr[i]+ tab[i - 2], tab[i - 1]);
		}else tab[i]= max(arr[i], tab[i-1]);

	}
	cout<<"tabulated ans"<< tab[5]<<endl;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*

*/