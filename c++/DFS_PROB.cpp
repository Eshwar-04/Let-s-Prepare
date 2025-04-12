/* Given an undirectedc graph with V vertices . we say two vertices u and v belong to single province if there is a part form u to v and v to u .

your task is to find the number of provinces ? 
  
  input : 
   1 <-> 2 <-> 3  4 <-> 5 <->6   7 <-> 8
   
   output : 3 
 
  Explanation : 
  
        a province 
         - is a grp of directly or indirectly connected cities and no other cities of the group
         
        Step 1 : visited array initalized to 0 , representing the nodes that are not visited
        Step 2 : Run the loop from 0 to N , and call the DFS for the first unvisited node.
        Step 3 ; DFS function will make sure that is starts the DFS call from the unvisited node , and visit all the nodes that are in the province and at the same time it will be also marked it as visited 
        Step 4 : since the node travelled in the traversal will be marked as visited , it will not be called for any further DFS traversal 
        Step 5 : keep repeating the steps for everynode that you find unvisited and visit the entire province
        Step 6 : add a count variable which will the number of DFS recurring function call 
   
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void DFS(int node, vector<int> adjls[], int vis[]) {
        vis[node] = 1; 
        for (auto it : adjls[node]) {
            if (!vis[it]) { 
                DFS(it, adjls, vis); 
            }
        }
    }

public:
    int NofPro(vector<vector<int>> adj, int v) {
        vector<int> adjls[v]; 
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                if (adj[i][j] == 1 && i != j) {
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }

        int vis[v] = {0}; 
        int count = 0;
        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                count++;
                DFS(i, adjls, vis); 
            }
        }

        return count;
    }
};

int main() {
    vector<vector<int>> adj = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };

    Solution ob;
    cout << ob.NofPro(adj, 3) << endl; 

    return 0;
}
