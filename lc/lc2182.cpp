#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string repeatLimitedString(string s, int repeatLimit)
    {
        string ans = "";
        priority_queue<pair<char, int>> pq;
        unordered_map<char, int> m;
        for (auto x : s)
        {
            m[x]++;
        }
        for (auto x : m)
        {
            // cout<<x.first<<" -- "<<x.second<<endl;
            pq.push({x.first, x.second});
        }
        // cout<<endl;
        while (!pq.empty())
        {
            auto top = pq.top();
            char ch = top.first;
            int ct = top.second;
            if (ct > repeatLimit)
            {
                for (int i = 0; i < repeatLimit; i++)
                {
                    ans += ch;
                }
                pq.pop();
                // pq.push({top.first,top.second - repeatLimit});
                if (pq.empty())
                    return ans;
                auto secondTop = pq.top();
                ans += secondTop.first;
                secondTop.second--;
                pq.pop();
                if (secondTop.second)
                {
                    pq.push({secondTop.first, secondTop.second});
                }

                pq.push({top.first, top.second - repeatLimit});
            }
            else
            {
                for (int i = 0; i < ct; i++)
                {
                    ans += ch;
                }
                pq.pop();
            }
        }
        return ans;
    }
};

int main()
{
    // Test case 1
    string s1 = "cczazcc";
    int repeatLimit1 = 3;
    Solution sol1;
    string result1 = sol1.repeatLimitedString(s1, repeatLimit1);
    cout << "Result 1: " << result1 << endl;

    // // Test case 2
    // string s2 = "cccccbbbbaaa";
    // int repeatLimit2 = 2;
    // Solution sol2;
    // string result2 = sol2.repeatLimitedString(s2, repeatLimit2);
    // cout << "Result 2: " << result2 << endl;

    // // Test case 3
    // string s3 = "zzzzzzzz";
    // int repeatLimit3 = 3;
    // Solution sol3;
    // string result3 = sol3.repeatLimitedString(s3, repeatLimit3);
    // cout << "Result 3: " << result3 << endl;

    // // Test case 4
    // string s4 = "abcabcabc";
    // int repeatLimit4 = 1;
    // Solution sol4;
    // string result4 = sol4.repeatLimitedString(s4, repeatLimit4);
    // cout << "Result 4: " << result4 << endl;

    // // Test case 5
    // string s5 = "aabbcc";
    // int repeatLimit5 = 2;
    // Solution sol5;
    // string result5 = sol5.repeatLimitedString(s5, repeatLimit5);
    // cout << "Result 5: " << result5 << endl;

    return 0;
}

/*
You are given a string s and an integer repeatLimit. Construct a new string repeatLimitedString using the characters of s such that no letter appears more than repeatLimit times in a row. You do not have to use all characters from s.

Return the lexicographically largest repeatLimitedString possible.

A string a is lexicographically larger than a string b if in the first position where a and b differ, string a has a letter that appears later in the alphabet than the corresponding letter in b5


Example 1:

Input: s = "cczazcc", repeatLimit = 3
Output: "zzcccac"
Explanation: We use all of the characters from s to construct the repeatLimitedString "zzcccac".
The letter 'a' appears at most 1 time in a row.
The letter 'c' appears at most 3 times in a row.
The letter 'z' appears at most 2 times in a row.
Hence, no letter appears more than repeatLimit times in a row and the string is a valid repeatLimitedString.
The string is the lexicographically largest repeatLimitedString possible so we return "zzcccac".
Note that the string "zzcccca" is lexicographically larger but the letter 'c' appears more than 3 times in a row, so it is not a valid repeatLimitedString.
Example 2:

Input: s = "aababab", repeatLimit = 2
Output: "bbabaa"
Explanation: We use only some of the characters from s to construct the repeatLimitedString "bbabaa".
The letter 'a' appears at most 2 times in a row.
The letter 'b' appears at most 2 times in a row.
Hence, no letter appears more than repeatLimit times in a row and the string is a valid repeatLimitedString.
The string is the lexicographically largest repeatLimitedString possible so we return "bbabaa".
Note that the string "bbabaaa" is lexicographically larger but the letter 'a' appears more than 2 times in a row, so it is not a valid repeatLimitedString.

*/