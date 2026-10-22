class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        if(!root) return 0;
        int count = 0;
        if(root->val % 2 == 0){
            if(root->left != NULL && root->left->left != NULL)
            count += root->left->left->val;
            if(root->left != NULL && root->left->right != NULL)
            count += root->left->right->val;
            if(root->right != NULL && root->right->right != NULL)
            count += root->right->right->val;
            if(root->right != NULL && root->right->left != NULL)
            count += root->right->left->val;
        }
        count += sumEvenGrandparent(root->left);
        count += sumEvenGrandparent(root->right);
        
    return count;
    }
};