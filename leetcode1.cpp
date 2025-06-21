#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minSwaps(vector<int> &nums)
    {
        int evenCt=0, oddCt =0;
        for( auto x : nums)
        {
            if( x %2) oddCt ++;
            else evenCt++;
        }
        if( abs(oddCt - evenCt)>=2)return -1;
        if(oddCt >evenCt){
            
        }
        else if (evenCt > oddCt){


        }
        else {

        }

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