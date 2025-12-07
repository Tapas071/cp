#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    string getBinary(int num)
    {
        if(num ==0)return "0";
        string str ="";
    while( num>0){
        int rem = num%2;
        str += to_string(rem);
        num = num/2;
    }
    reverse(str.begin(), str.end());
    return str;
    }
    string revBinary(string num)
    {
        reverse(num.begin(), num.end());
        return num;
    }
    int binaryToDecimal(string num)
    {
     return stoi(num, 0, 2);
    }
    vector<int> sortByReflection(vector<int> &nums)
    {
        vector<pair<int,int>> v;
        for (int i = 0; i < nums.size(); i++)
        {
            string binary = getBinary(nums[i]);
            string revBin = revBinary(binary);
            int deciVal = binaryToDecimal(revBin);
            v.push_back({ deciVal, nums[i]});
        }
        sort(v.begin(), v.end());
        vector<int> ans ;
        for( int i =0; i< nums.size(); i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};

class Solution2
{
public:
    vector<int>getAllPrimes(int n){
        vector<bool>isPrime(n+1, true);
        isPrime[1] = false;
        isPrime[0] = false;
        for( int i =2 ; i*i<= n ; i++){
            if(isPrime[i]){
                for( int j = i*i; j<= n; j+=i){
                    isPrime[i] = false;
                }
            }
        }
        vector<int> primes;
        for( int i =2; i<= n; i++){
            if(isPrime[i])primes.push_back(i);
        }
        return primes;
    }
    int largestPrime(int n)
    {
        vector<int> primes;
        primes = getAllPrimes(n);
        long long sum =0, i=0;
        while(sum<= n){
            sum+=primes[i];
            i++;
        }
        return sum;
    }
};

class Solution
{
public:
    long long totalScore(int hp, vector<int> &damage, vector<int> &requirement)
    {
        long long n = damage.size(), ans;
        vector<long long> pref(n+1, 0);
        for( int i =0; i< n; i++){
            pref[i+1] = damage[i] + pref[i];
        }
        unordered_map<long long,long long>m;
        for(int i =0; i< n; i++)m[pref[i]] =i;
        for( int i =0; i<n ; i++){
            long long val  = hp - pref[i+1] - requirement[i];
            int l = *lower_bound(pref.begin(), pref.end(), val);
            ans+= m[l]; 
        }
        return ans;
    }
};
int main()
{
    vector<string> strs = {"oo", "vv", "uu", "gg", "pp", "ff", "ss", "yy", "vv", "cc", "rr", "ig", "jj", "uu", "ig", "gb", "zz", "xx", "ff", "bb", "ii", "dd", "ii", "ee", "mm", "qq", "ig", "ww", "ss", "tt", "vv", "oo", "ww", "ss", "bi", "ff", "gg", "bi", "jj", "ee", "gb", "qq", "bg", "nn", "vv", "oo", "bb", "pp", "ww", "qq", "mm", "ee", "tt", "hh", "ss", "tt", "ee", "gi", "ig", "uu", "ff", "zz", "ii", "ff", "ss", "gi", "yy", "gb", "mm", "pp", "uu", "kk", "jj", "ee"};

    // Solution sol =  Solution();

    // int ans = sol.longestPalindrome(strs);
    // cout<<ans<<endl;

    return 0;
}