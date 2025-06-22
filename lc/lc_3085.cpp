#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> dp;
    int helper(int i, int j, vector<int> &freq, int k)
    {
        if (i == j)
            return 0;
        // cout<<endl;
        // cout<<freq[j]<<j<<endl;
        // cout<<(freq[j]-freq[i])<<endl;
        if ((freq[j] - freq[i]) <= k)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        int ans = min(freq[i] + helper(i + 1, j, freq, k), (freq[j] - freq[i] - k) + helper(i, j - 1, freq, k));
        // return ans;
        return dp[i][j] = ans;
    }
    int minimumDeletions(string word, int k)
    {
        dp = vector<vector<int>>(26, vector<int>(26, -1));
        vector<int> freq(26, 0);
        for (auto x : word)
            freq[x - 'a']++;
        sort(freq.begin(), freq.end());
        for (auto x : freq)
            cout << x << " ";
        return helper(0, 25, freq, k);
        return 0;
    }
};

    int
    main()
{
    vector<string> strs = {"oo", "vv", "uu", "gg", "pp", "ff", "ss", "yy", "vv", "cc", "rr", "ig", "jj", "uu", "ig", "gb", "zz", "xx", "ff", "bb", "ii", "dd", "ii", "ee", "mm", "qq", "ig", "ww", "ss", "tt", "vv", "oo", "ww", "ss", "bi", "ff", "gg", "bi", "jj", "ee", "gb", "qq", "bg", "nn", "vv", "oo", "bb", "pp", "ww", "qq", "mm", "ee", "tt", "hh", "ss", "tt", "ee", "gi", "ig", "uu", "ff", "zz", "ii", "ff", "ss", "gi", "yy", "gb", "mm", "pp", "uu", "kk", "jj", "ee" };

    Solution sol =  Solution();

    // int ans = sol.longestPalindrome(strs);
    // cout<<ans<<endl;


        return 0;
}