class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0, nums.size());
    }

private:
    TreeNode* build(vector<int>& nums, int l, int r) {
        if (l >= r) return nullptr;

        int m = l + (r - l) / 2;
        TreeNode* root = new TreeNode(nums[m]);

        root->left = build(nums, l, m);
        root->right = build(nums, m + 1, r);

        return root;
    }
};
