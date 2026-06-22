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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<pair<TreeNode*, TreeNode*>> BFS;
        BFS.push(pair{p, q});

        while (!BFS.empty()) {
            auto [node1, node2] = BFS.front();
            BFS.pop();

            if (!node1 || !node2) {
                if (!node1 && !node2) continue;
                return false;
            }

            if (node1->val == node2->val) {
                BFS.push({node1->left, node2->left});
                BFS.push({node1->right, node2->right});
            }
            
            else return false;
        }

        return true;
    }
};
