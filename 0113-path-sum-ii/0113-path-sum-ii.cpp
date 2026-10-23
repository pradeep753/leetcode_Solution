class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum=0;
        leftsum(root,sum,targetSum,ans,temp);
        return ans;
    }
    void leftsum(TreeNode* node,int &sum,int tSum, vector<vector<int>>& ans, vector<int>& temp){
        if(node==NULL) return;
        sum+=node->val;
        temp.push_back(node->val);
        if( node->left!=NULL)leftsum(node->left,sum,tSum,ans,temp);
        
        if( node->right!=NULL) leftsum(node->right,sum,tSum,ans,temp);
        else if(node->left==NULL && node->right==NULL){
            if(sum==tSum){
                ans.push_back(temp);
            }
        }
        sum-=node->val;
        temp.pop_back();
    }
};