class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return temp(nums, 0, nums.size() - 1);   
    }
private:
    TreeNode* temp(vector<int>& nums, int start, int end){
        if(start > end) return NULL;
        int maxval = nums[start];
        int index = start;
        for(int i = start + 1; i <= end; i++){
            if(nums[i] > maxval){
                maxval = nums[i];
                index = i;
            }
        }
        TreeNode* root = new TreeNode(maxval);
        root->left = temp(nums, start, index - 1);
        root->right = temp(nums, index + 1, end);
        return root;
    }   
};