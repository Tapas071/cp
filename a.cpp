#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDistance(string str, int k)
    {
        int n=0, s=0, e=0,w=0;
        for( auto x : str){
            char ch = x;
            if(ch=='N')n++;
            else if(ch=='W')w++;
            else if(ch =='E')e++;
            else if (ch == 'S')
                s++;
        }
        int dist = abs(n-s) + abs(e-w);
        int nsMin = min(n,s);
        int ewMin = min(e,w);
        if(nsMin<=k){
            dist += (2*nsMin);
            k -= nsMin;
        }
        else{
            dist += (2*k);
            k=0;
        }
        
        if( ewMin<=k){
            dist += (2*ewMin);
            k-= ewMin;
        }
        else {
            dist +=(2*k);
            k=0;
        }
        return dist;
    }
};
 class Solution2
{
public:
    int maxDifference(string s)
    {
        unordered_map<int, int> m;
        for (auto x : s)
            m[x]++;
        long long maxOddFreq = 0, minEvnFreq = INT_MAX;
        for (auto x : m)
        {
            if (x.second % 2 == 0)
            {
                if (x.second < minEvnFreq)
                    minEvnFreq = x.second;
            }
            else
                if(x.second> maxOddFreq)
                    maxOddFreq = x.second;
        }
        return maxOddFreq - minEvnFreq;
    }
};


    int
    main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int t = 1;
    // cin >> t;
    // while (t--)
    {
        // solve();
    }
    return 0;
}

