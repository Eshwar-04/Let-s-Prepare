
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

vector<int> bfsofGraph(vector<int> adj[], int v) {
    int vis[v] = {0};
    vis[0] = 1;      

    vector<int> bfs;
    queue<int> q;
    q.push(0); 

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node); 
        for (auto it : adj[node]) {
            if (!vis[it]) {
                vis[it] = 1; 
                q.push(it);  
            }
        }
    }

    return bfs;
}

int main() {
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];

    
    for (int i = 0; i < E; i++) {
        int s, e;
        cin >> s >> e;
        addEdge(adj, s, e);
    }

    vector<int> bfs = bfsofGraph(adj, V);
    for (int node : bfs) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
