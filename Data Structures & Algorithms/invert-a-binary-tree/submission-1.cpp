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
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return root;
        }

        queue<TreeNode*> BFS;
        BFS.push(root);
        while (!BFS.empty()) {
            TreeNode* currentNode = BFS.front();
            BFS.pop();
            if (currentNode != nullptr) {
                swap(currentNode->left, currentNode->right);
                if (currentNode->left) BFS.push(currentNode->left);
                if (currentNode->right) BFS.push(currentNode->right);
            }
        }

        return root;
    }
};
