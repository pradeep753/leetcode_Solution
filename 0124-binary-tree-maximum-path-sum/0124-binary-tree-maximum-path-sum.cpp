
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int ans = root->val;
        dfs(root, ans);
        return ans;
    }
    private:
        int dfs(TreeNode* root, int& ans){
            if(!root){
               return 0;
        }
            int leftSum = max(0, dfs(root->left, ans));
            int rightSum = max(0, dfs(root->right, ans));
            ans = max(ans, leftSum + root->val + rightSum);
        return root->val + max(leftSum, rightSum);
    }
};