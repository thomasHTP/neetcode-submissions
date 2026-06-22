/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int result = 1;
        
        stack<pair<TreeNode*, int>> DFS;
        DFS.push({root, result});
        while (!DFS.empty()) {
            auto [currentNode, currentDepth] = DFS.top();
            DFS.pop();

            result = max(result, currentDepth);

            if (currentNode->left) {
                DFS.push({currentNode->left, currentDepth + 1});
            }
            if (currentNode->right) {
                DFS.push({currentNode->right, currentDepth + 1});
            }
        }

        return result;
    }
};
