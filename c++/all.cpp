#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        // Create an empty list to store the answer
        vector<vector<int>> ans;

        // No node to traverse upon
        if (root == nullptr) {
            return ans;
        }

        // Make a queue
        queue<TreeNode*> q;

        // Push the root node into the queue
        q.push(root);

        // Until the queue is empty
        while (!q.empty()) {
            int size = q.size(); // Get the size of the current level

            // Create the level
            vector<int> level;

            // Traverse through all nodes at the current level
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                // Store the node value in the current level
                level.push_back(node->val);

                // Enqueue the left child of the node if it exists
                if (node->left != nullptr) {
                    q.push(node->left);
                }

                // Enqueue the right child of the node if it exists
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }

            // Add the current level to the answer
            ans.push_back(level);
        }

        return ans;
    }

    void printVector(const vector<vector<int>>& vec) {
        for (const vector<int>& level : vec) {
            for (int num : level) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left=new TreeNode(6);
    root->right->right=new TreeNode(7);

    Solution sol; // Creating an object for the solution class
    vector<vector<int>> res = sol.levelOrder(root);

    cout << "Level order traversal of the tree:" << endl;

    // Printing the level order traversal
    sol.printVector(res);

    return 0;
}
