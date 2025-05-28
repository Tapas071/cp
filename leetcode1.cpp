#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int longestPalindrome(vector<string>& words) {
            unordered_map<string, int> m;
            for( auto x : words)m[x]++;
            int ans =0,singlePair=0;
            // for( auto x : m){
            //     cout<<x.first<<" --- "<<x.second<<endl;
            // }
    
            for( auto x : m){
                string s = x.first;
                int ct = x.second;
                
                // cout<<s<<"  == "<<endl;
                if(s[0]==s[1]) {
                    cout<<"here "<< s << " count --> "<< ct<<endl;
                    if(ct%2==1){
                        singlePair ++;
                    }
                        ans += ((ct/2)*4);
                        // cout<<s<<ans<<endl;
                    
                }
                else
                {
                    cout<<"not equal"<<s<<" count -->"<<ct<<endl;
                    string revStr = s;
                    reverse(revStr.begin(), revStr.end());
                    int minCt = min(m[s], m[revStr]);
                    ans += (minCt*4);
                    m[s]=0;
                    m[revStr]=0;
                }
                // cout<<s<<" --"<<ans<<endl;
            }
            if(singlePair) ans +=2;
            return ans;
            
        }
    };

int main()
{
    vector<string> strs = {"oo", "vv", "uu", "gg", "pp", "ff", "ss", "yy", "vv", "cc", "rr", "ig", "jj", "uu", "ig", "gb", "zz", "xx", "ff", "bb", "ii", "dd", "ii", "ee", "mm", "qq", "ig", "ww", "ss", "tt", "vv", "oo", "ww", "ss", "bi", "ff", "gg", "bi", "jj", "ee", "gb", "qq", "bg", "nn", "vv", "oo", "bb", "pp", "ww", "qq", "mm", "ee", "tt", "hh", "ss", "tt", "ee", "gi", "ig", "uu", "ff", "zz", "ii", "ff", "ss", "gi", "yy", "gb", "mm", "pp", "uu", "kk", "jj", "ee" };

    Solution sol =  Solution();

    int ans = sol.longestPalindrome(strs);
    cout<<ans<<endl;


        return 0;
}