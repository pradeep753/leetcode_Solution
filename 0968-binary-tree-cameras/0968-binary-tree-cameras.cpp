class Solution {
    int dfs(TreeNode* root, int& count){
        if(!root)
        return 0;
        int left = dfs(root->left, count);
        int right = dfs(root->right, count);
        if(min(left, right) == -1){
            count++;
            return 1;
        }
        if(max(left, right) == 1){
            return 0;
        }
        return -1;
    }
public:
    int minCameraCover(TreeNode* root) {
        int count = 0;
        int x = dfs(root, count);
        return (x == -1)? count + 1: count;
    }
};