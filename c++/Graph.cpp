#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAdj(vector<int> adj[], int v){
    for (int i = 0; i < v; i++){
        cout << i;
        for(int j = 0; j < adj[i].size(); j++){
            cout << "->" << adj[i][j];
        }
        cout << endl;
    }
}

int main() {
	int V, E;
	cin >> V >> E;
	vector<int> adj[V];
	for (int i = 0; i < E; i++){
	    int s, e;
	    cin >> s >> e;
	    addEdge(adj, s, e);
	}
	cout << endl;
    printAdj(adj, V);
	
	return 0;
}