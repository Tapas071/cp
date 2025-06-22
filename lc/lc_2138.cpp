#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> divideString(string s, int k, char fill)
    {
        int n = s.size();
        vector<string> ans;
        string temp="";
        for (int i = 0; i < n; i++)
        {
            temp+= s[i];
            if(i+1 %k ==0){
                ans.push_back(temp);
                temp.clear();
            }
            
        }
        if( temp.size() ==k){
            ans.push_back(temp);
        }
        for( int i =0; i< k - temp.size();i++){
            temp+= fill;
        }
        ans.push_back(temp);
        return ans;
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