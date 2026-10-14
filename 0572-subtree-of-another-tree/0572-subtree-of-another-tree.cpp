class Solution {
public:
    string preOrder(TreeNode* root){
        if(!root) return "#";
        return "^" + to_string(root->val) + "," + preOrder(root->left) + preOrder(root->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string bigTree = preOrder(root);
        string smallTree = preOrder(subRoot);
        return bigTree.find(smallTree) != string::npos;
    }
};
