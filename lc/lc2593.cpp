#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    struct Compare
    {
        bool operator()(const pair<int, int> &a, const pair<int, int> &b)
        {
            if (a.first == b.first)
            {
                return a.second > b.second; // Compare by second element if first is equal
            }
            return a.first < b.first; // Compare by first element (descending order)
        }
    };

public:
    long long findScore(vector<int> &nums)
    {
        unordered_map<int, int> choosed;
        priority_queue<pair<int, int>> pq;
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq2;
        for (int i = 0; i < nums.size(); i++)
        {
            pq2.push({nums[i], i});
        }
        long long ans =0 , n = nums.size();
        
        while (pq2.size())
        {
            auto top = pq2.top();
            if(choosed[top.second]==false){
                ans +=top.first;
                if(top.second !=0){
                    choosed[top.second-1]=true;
                }
                if(top.second != n-1)choosed[top.second +1] = true;
                choosed[top.second]=true;

            }
            cout << top.second << " ";
            pq2.pop();
        }
        return ans;
    }
};

int main()
{

    return 0;
}

/*

You are given an array nums consisting of positive integers.

Starting with score = 0, apply the following algorithm:

Choose the smallest integer of the array that is not marked. If there is a tie, choose the one with the smallest index.
Add the value of the chosen integer to score.
Mark the chosen element and its two adjacent elements if they exist.
Repeat until all the array elements are marked.
Return the score you get after applying the above algorithm.




*/