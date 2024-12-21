#include <bits/stdc++.h>
using namespace std;

struct Tree {
    int data;
    Tree* left;
    Tree* right;
    //constructor
    Tree(int data): data(data), left(nullptr), right(nullptr){}
};


int main()
{
    Tree* t = new Tree(10);

   

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
        int d = top.first;
        int u = top.second;
        pq.pop();
        if(d > dist[u])continue;
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
