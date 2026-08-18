# DP
Those who don’t learn from their previous mistakes are doomed to repeat them — and that’s why Dynamic Programming is so powerful.

1. Top down approach
2. Bottom up approach

## 1. Fibonacci Numbers Top down approach
```cpp
int fib(int n,vector<int>&dp) {
    if (n <= 1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fib(n - 1,dp) + fib(n - 2,dp);
}
int main(){
    int n ; 
    cin>>n;
    vector<int>dp(n,0);
    cout<<fib(n,dp)<<endl;
}
```
##  Fibonacci Numbers Bottom Up approach
```cpp
int main(){
    int n ;
    cin>>n;
    vector<int>dp(n+1,0);
    dp[1]=1;
    for( int i =2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    } 
    return dp[n];
}

```

## 2. KnapSack Problem Subset problem sum

```cpp
    bool recur( int i, vector<int>&nums, int target, vector<vector<int>>&dp){
        int n = nums.size();
        if( i==n and target ==0)return true;
        if(!dp[i][target] )return dp[i][target];
        // take
        bool take = false, notTake= false;
        if(nums[i]<= target)
            take = recur(i+1, nums, target-nums[i],dp);
        // not take approach
        notTake = recur( i+1, nums, target,dp);
        return dp[i][target] = take | notTake;

    }

    int main(){
        int n, target;
        cin>>n;
        cin>>target;
        vector<vector<int>>dp(n+1,vector<bool>(target,false));
    }

```

## 

### Grid minimum path sum

```

#include <bits/stdc++.h>
using namespace std;
// powershell  terminal cmd to run the code:  g++ a.cpp -o a.exe ; .\a.exe

// in linux terminal: g++ a.cpp -o a && ./a

// powershell cmd to push into git:  git status; git add .; git commit -m "adding 1606a cf question from tle eliminator"; git push

// cmd prompt cmd to create a file and paste content to that directory:  copy a.cpp .\cf\a\1606a.cpp

	int dp_on_grid()
	{

		vector<vector<int>> grid = {{1, 5, 8}, {6, 2, 7}, {9, 3, 4}};

		// Memoization

		// tabulation
		int n = grid.size(), m = grid[0].size();

		vector<vector<int>> pathCost(n, vector<int>(m, 0));
		// pathCost[0][0] = grid[0][0];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				int xDistMax =INT_MAX, yDistMax = INT_MAX;
				if (i != 0)
				{
					xDistMax = pathCost[i - 1][j];
				}
				if (j != 0)
				{
					yDistMax = pathCost[i][j - 1];
				}
				pathCost[i][j] += grid[i][j];
				if(i!=0 or j !=0){
					pathCost[i][j] += min(xDistMax, yDistMax);
				}
			}
		}
		cout << endl;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout<<pathCost[i][j]<<" ";
			}
			cout<<endl;
		}

		return pathCost[n - 1][m - 1];
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
        // solve();
		int val = dp_on_grid();
		cout<<val<<endl;
    }
    return 0;
}

/*

*/
```

### House robber problem


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
