class Solution {
    void dfs(TreeNode* root, vector<string>& res, string temp){
        temp += to_string(root->val);
        if(root->left)
            dfs(root->left, res, temp + "->");        
        if(root->right)
            dfs(root->right, res, temp + "->");       
        if(!root->left && !root->right)
        res.push_back(temp);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        dfs(root,res,"");
        return (res);
    }
};