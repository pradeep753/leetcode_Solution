
class Solution {
public:
    unordered_map<int, int> mp;
    TreeNode* solve(vector<int>& postorder, int l, int r, int& idx) {
        if (l > r) return NULL;
        int val = postorder[idx--];
        TreeNode* root = new TreeNode(val);
        int mid = mp[val];

        root->right = solve(postorder, mid + 1, r, idx);
        root->left = solve(postorder, l, mid - 1, idx);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        mp.clear();
        for (int i = 0; i < n; i++) {
            mp[inorder[i]] = i;
        }
        int idx = n - 1;
        return solve(postorder, 0, n - 1, idx);
    }
};
