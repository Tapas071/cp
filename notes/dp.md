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
