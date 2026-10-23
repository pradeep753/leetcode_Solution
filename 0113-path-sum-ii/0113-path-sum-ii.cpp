class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        dfs(root, targetSum, 0, path, ans);
        return ans;
    }
    void dfs(TreeNode* node, int targetSum, int curSum,
             vector<int>& path, vector<vector<int>>& ans) {
        if (!node) return;
        curSum += node->val;
        path.push_back(node->val);

        if (!node->left && !node->right && curSum == targetSum) {
            ans.push_back(path);
        }
        dfs(node->left, targetSum, curSum, path, ans);
        dfs(node->right, targetSum, curSum, path, ans);
        path.pop_back();
    }
};