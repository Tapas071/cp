#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumLength(string s)
    {
        // getting all the substring
        vector<string> ss;
        int n = s.size(), res = 0;
        for (int i = 0; i < n; i++)
        {
            string ans = "";
            set<char>st;
            for (int j = i; j < n; j++)
            {
                ans += s[j];
                st.insert(s[j]);
                if(st.size()==1)
                    ss.push_back(ans);
            }
        }
        //  getting count of all strings
        unordered_map<string, int> m;
        for (auto x : ss)
        {
            m[x]++;
        }
        for (auto x : m)
        {
            if (x.second > 2)
            {
                cout << x.first << " ";
                int sx = x.first.length();
                res = max(res, sx);
            }
        }
        return res == 0 ? -1 : res;
    }
};

int main(){




    return 0;
}