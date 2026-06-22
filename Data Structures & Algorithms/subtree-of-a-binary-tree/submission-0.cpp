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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!subRoot) {
            return true;
        }
        if (!root) {
            return false;
        }

        queue<TreeNode*> searchQ;
        searchQ.push(root);

        while (!searchQ.empty()) {
            auto currNode = searchQ.front();
            searchQ.pop();

            if (currNode && currNode->val == subRoot->val) {
                if (sameTree(currNode, subRoot)) {
                    return true;
                }
            }
            if (currNode->left) searchQ.push(currNode->left);
            if (currNode->right) searchQ.push(currNode->right);
        }

        return false;
    }

    bool sameTree(TreeNode* rootOne, TreeNode* rootTwo) {
        if (!rootOne && !rootTwo) {
            return true;
        }
        queue<pair<TreeNode*, TreeNode*>> searchQ;
        searchQ.push({rootOne, rootTwo});

        while (!searchQ.empty()) {
            auto [firstNode, secondNode] = searchQ.front();
            searchQ.pop();

            if (firstNode && secondNode) {
                if (firstNode->val == secondNode->val) {
                    searchQ.push({firstNode->left, secondNode->left});
                    searchQ.push({firstNode->right, secondNode->right});
                }
                else return false;
            }
            else if (!firstNode && !secondNode) {
                continue;
            }
            else return false;
        }

        return true;
    }
};
