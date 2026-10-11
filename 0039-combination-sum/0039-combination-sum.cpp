class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& combination, int start){
        if(target == 0){
            ans.push_back(combination);
            return;
        }
        if(target < 0) return;
        for(int i = start; i < candidates.size(); i++){
            combination.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], ans, combination, i);
            combination.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combination;
        backtrack(candidates, target, ans, combination, 0);
        return ans;
    }
};