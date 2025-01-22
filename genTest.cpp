#include <bits/stdc++.h>
using namespace std;

struct Tree {
    int data;
    Tree* left;
    Tree* right;
    //constructor
    Tree(int data): data(data), left(nullptr), right(nullptr){}
};

class TrieNode {
    public:
    unordered_map<char,TrieNode*> children;
    bool isEndOfWord;

    TrieNode(){
        isEndOfWord = false;
    }
};
class Trie {
    private:
        TrieNode * root;
    public:
            Trie(){
                root = new TrieNode();
            }
// insert
void insert(string word){
    TrieNode* current = root;
    for(char c : word){
        if (current->children.find(c) == current->children.end())
        {
            current->children[c] = new TrieNode();
        }
        current = current->children[c];
    }
    current->isEndOfWord= true;
}
bool search ( string word){
    TrieNode* current = root;
    for( char ch : word){
        if(current->children.find(ch) != current->children.end()){
            current= current->children[ch];
        }
        else return false;
    }
    return (current->isEndOfWord);
}
bool startsWith(string word)
{
    TrieNode *current = root;
    for (char ch : word)
    {
        if (current->children.find(ch) == current->children.end())
            return false;
        current = current->children[ch];
    }
    return true;
}
};


// searching of the word

// prefix search of the word
class Solution4
{
public:
    long long minCost(vector<int> &arr, vector<int> &brr, long long k)
    {
        long long  ans=0 , n = arr.size() , ans2=0;
        vector<int> aSort,bSort , aRank, bRank;
        aSort= arr;
        bSort= brr;
        sort(aSort.begin(), aSort.end());
        sort(bSort.begin(), bSort.end());
        unordered_map<int,int> ma,mb;
        for( int i =0; i< n; i++){
            ma[aSort[i]]=i;
            mb[bSort[i]]=i;
        }
        for( int i =0; i< n; i++){
            aRank.push_back(ma[arr[i]]);
            bRank.push_back(mb[brr[i]]);
        }
        for( int  i=0; i< n;i++){
            ans  += abs(aSort[i]-bSort[i]);
        }
        for (int i = 0; i < n; i++)
        {
            ans2 += abs(arr[i] - brr[i]);
        }

        if( aRank !=bRank){
            ans +=k;
        }
        return max(ans, ans2);
    }
};


    class Solution3
{
public:
    int maxAdjacentDistance(vector<int> &nums)
    {
     vector<int> ans;

     for(auto x : nums)ans.push_back(x);
     for(auto x : nums)ans.push_back(x);
     int n =  ans.size();
     int res =0;
     for( int i =0; i<n-1; i++){
        res = max( res, abs(nums[i]-nums[i+1]));
     }
     return res;
    }
};
    // leetcode solution
class Solution
{
public:
    int mod = 1e9 + 7;
    long long factorial(long long n)
    {
        long long result = 1;
        for (long long i = 1; i <= n; ++i)
        {
            result = (result * i) % mod;
        }
        return result;
    }
    long long modularInverse(long long a)
    {
        long long result = 1, power = mod - 2;
        while (power > 0)
        {
            if (power % 2 == 1)
            {
                result = (result * a) % mod;
            }
            a = (a * a) % mod;
            power /= 2;
        }
        return result;
    }

    long long nCr(long long n, long long r)
    {
        if (r > n)
            return 0;
        if (r == 0 || r == n)
            return 1;
        long long num = factorial(n);
        long long den = (factorial(r) * factorial(n - r)) % mod;
        return (num * modularInverse(den)) % mod;
    }
    int minMaxSums(vector<int> &nums, int k)
    {
        long long n = nums.size(), ans = 0;
        for (int i = 0; i < n; i++)
        {
             long long val= nums[n-i-1] * pow(2,n-i-1) ;
            ans = (ans + val) %mod;
            long long val = nums[i] * pow(2, n-i-1);
            ans = (ans + val) % mod;
            // for (int j = 0; j < k; j++)
            // {
            //     ans += (nums[n - i - 1] * (nCr(n - i - 1, j))) % mod;
            //     ans += (nums[i] * (nCr(n - i - 1, j))) % mod;
            // }
            cout << ans << " ";
        }
        return ans;
    }
};


    class Solution5
{
public:
    int subarraySum(vector<int> &nums)
    {
        int ans =0;
        int n = nums.size();
        for( int i =0; i< n; i++){
            for( int j =i; j< n; j++){
                if(i == max(0,j-nums[j])){
                    for( int k=i;k<=j;k++){
                        ans +=nums[k];
                    }
                }

            }


        }
        return ans;

    }
};


    class Solution1
{
public:
    vector<int> zigzagTraversal(vector<vector<int>> &grid)
    {
        int n= grid.size(), m = grid[0].size();
        int j =0;
        vector<int> ans;

        for( int i =0; i< n; i++){
            if( i%2){
                for( int j =1; j< m; j+=2){
                    ans.push_back(grid[i][j]);
                }
                

            }
            else {
                reverse(grid[i].begin(), grid[i].end());
                for( int j =0; j<m; j +=2 ){
                    ans.push_back(grid[i][j]);


                }
            }

        }
        return ans;

    }
};

class Solution2
{
public:
    int maximumAmount(vector<vector<int>> &coins)
    {
        int n = coins.size(), m = coins[0].size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m, vector<int>(3,INT_MIN)));
        dp[0][0][0]= coins[0][0];
        if(coins[0][0]<0)dp[0][0][1] =0;
        for(int i=0;i< n; i++){
            for( int j =0; j< m; j++){
                for( int k =0; k<3; k++){
                    


                }
            }
        }



    }
};





    // I can't understand how to solve the problem. there maybe a recurstion solution. But don't give up . Don't think

    int
    main()
{
    //  to take input from the input.txt file and to show the output in the output.txt file
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
// int t ;
// cin>>t;
// while(t--){
//     int n,m;
//     cin>>n>>m;
// }
    return 0;
}

typedef pair<int, int> pii;

void dijikstra(int start, vector<vector<pii>> &graph){
    int n = graph.size();
    vector<int>dist(n,INT_MAX);
    priority_queue<pii, vector<pii> ,greater<pii>>pq;
    dist[start]=0;
    pq.push({0,start}); // pushing dist and node

    // you don't need to make visited array as it is a dag 
    while(!pq.empty()){
        pii top = pq.top();
        int d = top.first; /// dist of the closest node 
        int u = top.second; // exploring node
        pq.pop();
        if(d > dist[u])continue; // if you found that the exploring node has distance already smaller to the precomputed dist to that node 
        for( auto & neighbour: graph[u]){
            int v = neighbour.first;
            int weight = neighbour.second;
            if(dist[u] + weight < dist[v]){
                dist[v] = dist[u] + weight;
                pq.push({dist[v],v});
            }

        }
        
    }
}

bool detectCycleInDirectedGraph(vector<vector<int>> &graph, int n, int i, vector<bool> &vis, vector<bool> &recStack)
{
    vis[i]=true;
    recStack[i] = true;
    for( int v : graph[i]){
        if (!vis[v] && detectCycleInDirectedGraph(graph, n, v , vis, recStack))return true;
        else {
            if(recStack[v])return true;
        }
    }
    recStack[i] = false;
    return false;
   
}


void bfs(int n, vector<vector<int>> &graph)
{
    queue<int> q;
    q.push(n);
    vector<bool> visited(graph.size(), false);
    visited[n] = true;
    while (!q.empty())
    {
        int sx = q.size();
        for (int i = 0; i < sx; i++)
        {
            int node = q.front();
            q.pop();
            for (int nn : graph[node])
            {
                if (!visited[nn])
                {
                    q.push(nn);
                    visited[nn] = true;
                }
            }
        }
    }
}

void dfs(int n, vector<bool> &visited, vector<vector<int>> &graph)
{
    visited[n] = true;
    // do all the operation
    //
    for (auto node : graph[n])
    {
        if (!visited[node])
            dfs(node, visited, graph);
    }
}

// leetcode solution

class TaskManager
{
public:
    unordered_map<int, int> taskToUser;
    unordered_map<int, int> taskToPriority;
    unordered_map<int, set<int>> priorityToTask;
    priority_queue<int> pq;
    TaskManager(vector<vector<int>> &tasks)
    {
        for (int i = 0; i < tasks.size(); i++)
        {
            add(tasks[i][0], tasks[i][1], tasks[i][2]);
        }
    }

    void add(int userId, int taskId, int priority)
    {
        taskToUser[taskId] = userId;
        taskToPriority[taskId] = priority;
        priorityToTask[priority].insert(taskId);
        pq.push(priority);
    }

    void edit(int taskId, int newPriority)
    {
        int oldPriority = taskToPriority[taskId];
        priorityToTask[oldPriority].erase(taskId);
        priorityToTask[newPriority].insert(taskId);
        taskToPriority[taskId] = newPriority;
        pq.push(newPriority);
    }

    void rmv(int taskId)
    {
        int oldPriority = taskToPriority[taskId];
        priorityToTask[oldPriority].erase(taskId);
    }

    int execTop()
    {
        int topPriority = pq.top();
        while (priorityToTask[topPriority].size() == 0)
        {
            pq.pop();
            topPriority = pq.top();
        }
        int topPrioTask = *priorityToTask[topPriority].begin();
        rmv(topPrioTask);
        return taskToUser[topPrioTask];
    }
};



class PoluMorphExamp{
    int a;


    int sum (int a, int b){
        return a +b;
    }
    int sum ( int a, int b, int c){

        return a + b+c;
    }
    int sum ( int a , float b){

        return 0;
    }

    int complexNum + ()( int a , int b){



    }

    // parent 

    int main(){
        int a =10;
        int b  = 20;
   cout<< sum ( a, b,b)<<endl;

    }




};


class Animal {

    void sound (){
        cout<<"making some sound ";
        
    }
};
class Cat:Animal {

    @override
    void sound{
        cout<<"making noice"<<endl;
    }


};

int main(){

    Cat* a = new Cat();
    // cout<<a.sound<<endl;
    // Animal* b = new Cat();
    
    


}