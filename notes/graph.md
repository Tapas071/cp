#Graph

## Topics
1. Representing Graphs
2. Graph Traversal (DFS, BFS)
3. Shortest Path (Dijkstra, Bellman-Ford, Floyd-Warshall)
4. Minimum Spanning Tree (Prim, Kruskal)
5. Topological Sort (Kahn's Algorithm, DFS)
6. Union Find (Union Find by Rank, Union Find by Size)
7. Strongly Connected Components (Kosaraju's Algorithm, Tarjan's Algorithm)
8. Eulerian Path
9. Hamiltonian Path
10. Graph Coloring
11. Network Flow
12. Bipartite Matching
13. Maximum Flow
14. Minimum Cut
15. Maximum Bipartite Matching
16. Maximum Bipartite Matching with Weights
17. Maximum Bipartite Matching with Weights and Costs
18. Maximum Flow with Costs

## Representing Graphs
1. Adjacency Matrix
2. Adjacency List

### Adjacency Matrix
 ```cpp
   void AdjMatFunction( vector<vector>>& edges){
    int n = edges.size();
    vector<vector> adjMat(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            adjMat[i][j] = edges[i][j];
        }
    }
   }

   // space complexity O(n^2)
 ```
### Adjacency List
 ```cpp
   void AdjListFunction( vector<vector>>& edges){
    int n = edges.size();
    vector<vector> adjList(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(edges[i][j] != 0){
                adjList[i].push_back(j);
            }
        }
    }
   }
   // space complexity O(n + m)
 ```


## Graph Traversal
1. Depth First Search (DFS)
2. Breadth First Search (BFS)

### Depth First Search (DFS)
```cpp
void dfs(vector<vector<int>>& graph, vector<bool>& visited, int u){
    visited[u] = true;
    for(int v : graph[u]){
        if(!visited[v]){
            dfs(graph, visited, v);
        }
    }
}
```

### Breadth First Search (BFS)
```cpp
void bfs(vector<vector<int>>& graph, vector<bool>& visited, int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : graph[u]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
```

## Shortest Path
1. Dijkstra's Algorithm
2. Bellman-Ford Algorithm
3. Floyd-Warshall Algorithm

### Dijkstra's Algorithm
```cpp
// here dist is the vector which stores the distance of each node from the source node and the initial value of the dist vector is INT_MAX
// here u is the source node
void dijkstra(vector<vector<pair<int, int>>>& graph, vector<int>& dist, int u){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
    pq.push({0, u});
    dist[u] = 0;
    while(!pq.empty()){
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();
        if(d > dist[u]) continue;
        for(auto p : graph[u]){
            int v = p.first;
            int w = p.second;
            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}
```

### Bellman-Ford Algorithm
```cpp
// here dist is the vector which stores the distance of each node from the source node and the initial value of the dist vector is INT_MAX
// here u is the source node
void bellmanFord(vector<vector<pair<int, int>>>& graph, vector<int>& dist, int u){
    int n = graph.size();
    dist[u] = 0;
    for(int i = 0; i < n - 1; i++){
        for(int u = 0; u < n; u++){
            for(auto p : graph[u]){
                int v = p.first;
                int w = p.second;
                if(dist[u] + w < dist[v]){
                    dist[v] = dist[u] + w;
                }
            }
        }
    }
}
```

## Minimum Spanning Tree
1. Prim's Algorithm
2. Kruskal's Algorithm

### Prim's Algorithm
```cpp
// here graph is the adjacency list of the graph and n is the number of nodes in the graph
int prim(vector<vector<pair<int, int>>>& graph, int n){
    int cost = 0;
    vector<bool> visited(n, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});
    while(!pq.empty()){
        int u = pq.top().second;
        int w = pq.top().first;
        pq.pop();
        if(visited[u]) continue;
        visited[u] = true;
        cost += w;
        for(auto p : graph[u]){
            int v = p.first;
            int weight = p.second;
            if(!visited[v]){
                pq.push({weight, v});
            }
        }
    }
    return cost;
}
```

### Kruskal's Algorithm
```cpp
int kruskal(vector<vector<pair<int, int>>>& graph, int n){
    int cost = 0;
    vector<int> parent(n);
    for(int i = 0; i < n; i++){
        parent[i] = i;
    }
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    for(int u = 0; u < n; u++){
        for(auto p : graph[u]){
            int v = p.first;
            int w = p.second;
            pq.push({w, {u, v}});
        }
    }
    while(!pq.empty()){
        int w = pq.top().first;
        int u = pq.top().second.first;
        int v = pq.top().second.second;
        pq.pop();
        int pu = u;
        int pv = v;
        while(parent[pu] != pu){
            pu = parent[pu];
        }
        while(parent[pv] != pv){
            pv = parent[pv];
        }
        if(pu != pv){
            cost += w;
            parent[pu] = pv;
        }
    }
    return cost;
}
```

## Topological Sort
1. Kahn's Algorithm
2. Depth First Search

### Depth First Search
```cpp
void dfs(vector<vector<int>>& graph, vector<bool>& visited, stack<int>& s, int u){
    visited[u] = true;
    for(int v : graph[u]){
        if(!visited[v]){
            dfs(graph, visited, s, v);
        }
    }
    s.push(u);
}
```

### Kahn's Algorithm
```cpp
vector<int> kahnsAlgorithm(vector<vector<int>>& graph, int n){
    vector<int> inDegree(n, 0);
    for(int u = 0; u < n; u++){
        for(int v : graph[u]){
            inDegree[v]++;
        }
    }
    queue<int> q;
    for(int u = 0; u < n; u++){
        if(inDegree[u] == 0){
            q.push(u);
        }
    }
    vector<int> order;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        order.push_back(u);
        for(int v : graph[u]){
            inDegree[v]--;
            if(inDegree[v] == 0){
                q.push(v);
            }
        }
    }
    return order;
}
```

## Union Find
1. Union Find by Rank
2. Union Find by Size

### Union Find by Rank
```cpp
int find(int u, vector<int>& parent){
    if(parent[u] == u){
        return u;
    }
    return parent[u] = find(parent[u], parent);
}
void union(int u, int v, vector<int>& parent, vector<int>& rank){
    u = find(u, parent);
    v = find(v, parent);
    if(u != v){
        if(rank[u] < rank[v]){
            swap(u, v);
        }
        parent[v] = u;
        if(rank[u] == rank[v]){
            rank[u]++;
        }
    }
}
isConnected(int u, int v, vector<int>& parent){
    return find(u, parent) == find(v, parent);
}

int main (){
    int n = 5;
    vector<int> parent(n), rank(n, 0);
    for(int i = 0; i < n; i++)
        parent[i] = i;
    union(0, 1, parent, rank);
    union(1, 2, parent, rank);
    union(3, 4, parent, rank);
    cout << isConnected(0, 2, parent) << endl;
    cout << isConnected(3, 4, parent) << endl;
    cout << isConnected(0, 4, parent) << endl;
}

```
