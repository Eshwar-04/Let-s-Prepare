
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printDisp(vector<int>& ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

class Solution {
private:
    void RecDFS(int vis[], vector<int> adj[], vector<int>& ls, int node) {
        vis[node] = 1;
        ls.push_back(node);
        for (auto it : adj[node]) {
            if (!vis[it]) {
                RecDFS(vis,adj,ls,it);
            }
        }
    }

public:
    vector<int> dfsGraph(int v, vector<int> adj[]) {
        int vis[v] = {0};
        int start = 0;
        vector<int> ls;
        RecDFS(vis,adj,ls,start); 
        return ls;
    }
};

int main() {
    
    vector<int> adj[5];
    addEdge(adj,0,2);
    addEdge(adj,2,4);
    addEdge(adj,0,1);
    addEdge(adj,0,3);


    Solution sol;
    vector<int> ans = sol.dfsGraph(5, adj);
    printDisp(ans);

    return 0;
}

