/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */
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
    vector<int> solve(TreeNode* root, int distance, int& count) {
        if (!root) {
            return {};
        }
        if (!root->left && !root->right) {
            return {1};
        }
        vector<int> leftTree = solve(root->left, distance, count);
        vector<int> rightTree = solve(root->right, distance, count);

        if (!leftTree.empty() && !rightTree.empty()) {
            for (int i = 0; i < leftTree.size(); i++) {
                for (int j = 0; j < rightTree.size(); j++) {
                    if (leftTree[i] + rightTree[j] <= distance) {
                        count++;
                    }
                }
            }
        }
        vector<int> ans;

        if (!leftTree.empty()) {
            for (int i = 0; i < leftTree.size(); i++) {
                ans.push_back(leftTree[i] + 1);
            }
        }


        if (!rightTree.empty()) {
            for (int i = 0; i < rightTree.size(); i++) {
                ans.push_back(rightTree[i] + 1);
            }
        }
        return ans;
    }
    int countPairs(TreeNode* root, int distance) {
        int count = 0;
        solve(root, distance, count);
        return count;
    }
};