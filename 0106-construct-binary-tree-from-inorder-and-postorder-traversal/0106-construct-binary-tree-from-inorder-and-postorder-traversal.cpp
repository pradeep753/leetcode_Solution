class Solution {
public:
    TreeNode* Tree(vector<int>& inorder, int x, int y, vector<int>& postorder, int a, int b){
        if(x > y || a > b) return NULL;
        TreeNode* node = new TreeNode(postorder[b]);
        int SI = x;
        while(node->val != inorder[SI]) SI++;
        node->left = Tree(inorder, x, SI - 1, postorder, a, a + SI - x - 1);
        node->right = Tree(inorder, SI + 1, y, postorder, a + SI - x, b - 1);
        return node;

    }    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       return Tree(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1);
    }
};