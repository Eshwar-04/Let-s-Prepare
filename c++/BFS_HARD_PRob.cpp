 /*      Number of Distinct islands

Q] Given a grid of size N x M(N are number of rows and M are number of columns) conisiting of 0 's i.e., water and 1's i.e., land.
Find the number of islands

Note: an island is surrounded by water and is formed by connecting adjacent lands horizontally and vertically or diagonally i.e., in all 8 directions.

Pre requisities: connected components and graph traversal techniques

input:
    0 1 1 0
    0 1 1 0
    0 0 1 0
    0 0 0 0
    1 1 0 1

->  8 directions can be as :

north - east -> [row - 1, col - 1]
north - west -> [row - 1, col + 1]
north -> [row - 1, col]
east -> [row, col - 1]
west -> [row, col + 1]
south -> [row + 1, col]
south - east -> [row + 1, col - 1]
south - west -> [row + 1, col + 1]


class Solution {

   private: void DFS(int row, int col, vector < vector < int >> & vis, vector < vector < int >> & grid)
       {
           vis[row][col] = 1;
           queue < pair < int, int >> q; //initalization
           q.push({
               row,
               col
           });
           int n = grid.size();
           int m = grid[0].size();

           while (!q.empty())
           {
               int row = q.front.first();
               int col = q.front.second();
               q.pop();
           }

           outerloop: row offsets - 1 prev, 0 current, +1 next -> delrow
           innerloop: col offsets - 1 prev, 0 current, +1 next -> delcol

           Lemma[row, col]: together with delrow, this covers all 8 directions

           possible neighbour cells:
               -> neighbouring row index nrow = row + delrow; 
               -> neighbouring col index ncol = col + delcol;
               
            IF : VALIDATION CHECKS
                Row is within grid bounds; -> nrow >= 0 && nrow < n  , 0 to n-1
                column is within grid bounds;-> ncol >= 0 && ncol < n  , 0 to m-1
                the neighbour is a land;-> grid[nrow][ncol] == 1 
                the neighbour has not been visited yet; -> !vis[nrow][ncol] 
                
            PROCESSING VALID NEIGHBOURS:
                        
                mark the neighbour as visited -> vis[nrow][ncol]== 1 
                add it to the queue for further processing -> q.push({nrow,ncol})
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
        void DFS(int row , int col ,vector<vector<int>>&vis,vector<vector<int>>&grid)
        {
            vis[row][col]=1;
            queue <pair<int,int>> q;
            q.push({row,col});
            int n=grid.size();
            int m=grid[0].size();
            
            while(!q.empty())
            {
                int row=q.front().first;
                int col=q.front().second;
                q.pop();
                
                for (int delrow = -1; delrow <= 1; ++delrow)
                {
                   for (int delcol = -1; delcol <= 1; ++delcol)
                   {
                        int nrow = row + delrow;
                        int ncol = col +delcol;
                         if(nrow>=0 && nrow<n && ncol >=0 && ncol<n &&grid[nrow][ncol]==1 && !vis[nrow][ncol])
                        {
                            vis[nrow][ncol]=1;
                            q.push({row,col});
                        }
                
                    }
                }
        
            }
        }
        
    public: int numIls(vector < vector < int >> & grid) {
           int n = grid.size();
           int m = grid[0].size();
           vector < vector < int >> vis(n, vector < int > (m, 0));
           int count = 0;
           for (int i = 0; i < n; ++i) {
               for (int j = 0; j < m; ++j) {
                   if (grid[i][j] == 1 && !vis[i][j]) {
                       DFS(i, j, vis, grid);
                       ++count;
                   }
               }
           }
           return count;
       }
};

int main()
{
    vector<vector<int>> grid = {
        {0, 1, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 0},
        {1, 1, 0, 1}
    };

    Solution obj;
    int result = obj.numIls(grid);
    cout << "Number of distinct islands: " << result << endl;
    return 0;
}
    