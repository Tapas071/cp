#include<bits/stdc++.h>
using namespace std;
class Solution1
{
public:
    string getBinary(int num)
    {
        if (num == 0)
            return "0";
        string str = "";
        while (num > 0)
        {
            int rem = num % 2;
            str += to_string(rem);
            num = num / 2;
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
        vector<pair<int, int>> v;
        for (int i = 0; i < nums.size(); i++)
        {
            string binary = getBinary(nums[i]);
            string revBin = revBinary(binary);
            int deciVal = binaryToDecimal(revBin);
            v.push_back({deciVal, nums[i]});
        }
        sort(v.begin(), v.end());
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};

class Solution2
{
public:
    vector<int> getAllPrimes(int n)
    {
        vector<bool> isPrime(n + 1, true);
        isPrime[1] = false;
        isPrime[0] = false;
        for (int i = 2; i * i <= n; i++)
        {
            if (isPrime[i])
            {
                for (int j = i * i; j <= n; j += i)
                {
                    isPrime[i] = false;
                }
            }
        }
        vector<int> primes;
        for (int i = 2; i <= n; i++)
        {
            if (isPrime[i])
                primes.push_back(i);
        }
        return primes;
    }
    int largestPrime(int n)
    {
        vector<int> primes;
        primes = getAllPrimes(n);
        long long sum = 0, i = 0;
        while (sum <= n)
        {
            sum += primes[i];
            i++;
        }
        return sum;
    }
};

class Solution3
{
public:
    long long totalScore(int hp, vector<int> &damage, vector<int> &requirement)
    {
        long long n = damage.size(), ans;
        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            pref[i + 1] = damage[i] + pref[i];
        }
        unordered_map<long long, long long> m;
        for (int i = 0; i < n; i++)
            m[pref[i]] = i;
        for (int i = 0; i < n; i++)
        {
            long long val = hp - pref[i + 1] - requirement[i];
            int l = *lower_bound(pref.begin(), pref.end(), val);
            ans += m[l];
        }
        return ans;
    }
};

class Solution4
{
public:
    string reverseWords(string s)
    {
        vector<string> strs;
        int n = s.size();
        string str = "";
        for (int i = 0; i < n; i++)
        {

            if (s[i] == ' ')
            {
                strs.push_back(str);
                str = "";
            }
            else
                str += s[i];
        }
        strs.push_back(str);
        // for( auto x : strs)cout<<x<<" ";
        str = "";
        int firstVowelCt = 0;
        string ans = "";
        for (int i = 0; i < strs.size(); i++)
        {
            str = strs[i];
            if (i == 0)
            {
                for (auto x : str)
                {
                    // cout<<x<<" ";
                    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
                    {
                        firstVowelCt++;
                        cout << x << " count" << firstVowelCt << endl;
                    }
                }
                cout << firstVowelCt << endl;
                ans += str;
                ans += " ";
            }
            else
            {
                int vowelCt = 0;
                cout << firstVowelCt << endl;
                for (auto x : str)
                {
                    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
                    {
                        vowelCt++;
                    }
                }
                // cout<<vowelCt<<" -- "<< firstVowelCt<<str<<endl;
                if (vowelCt == firstVowelCt)
                {
                    reverse(str.begin(), str.end());
                    ans += str;
                    ans += " ";
                }
                else
                {
                    ans += str;
                    ans += " ";
                }
            }
        }
        ans.pop_back();
        return ans;
    }
};

class Solution
{
public:
    double separateSquares(vector<vector<int>> &squares)
    {
    }
};

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