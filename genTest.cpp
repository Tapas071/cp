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




// I can't understand how to solve the problem. there maybe a recurstion solution. But don't give up . Don't think

int main()
{
    //  to take input from the input.txt file and to show the output in the output.txt file
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Trie trie;

    // Insert words into the Trie
    trie.insert("apple");
    trie.insert("app");
    trie.insert("bat");

    // Test search function
    cout << (trie.search("apple") ? "Found 'apple'\n" : "Not Found 'apple'\n");
    cout << (trie.search("app") ? "Found 'app'\n" : "Not Found 'app'\n");
    cout << (trie.search("bat") ? "Found 'bat'\n" : "Not Found 'bat'\n");
    cout << (trie.search("cat") ? "Found 'cat'\n" : "Not Found 'cat'\n");

    // Test prefix function
    cout << (trie.startsWith("ap") ? "Prefix 'ap' Found\n" : "Prefix 'ap' Not Found\n");
    cout << (trie.startsWith("ba") ? "Prefix 'ba' Found\n" : "Prefix 'ba' Not Found\n");
    cout << (trie.startsWith("ca") ? "Prefix 'ca' Found\n" : "Prefix 'ca' Not Found\n");

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
