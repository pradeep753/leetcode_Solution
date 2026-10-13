class Solution {
public:
    void perform(int i, vector<vector<int>>& res, vector<int>& nums){
        if(i == nums.size()){
            res.push_back(nums);
            return;
        }
        for(int k = i; k < nums.size(); k++){
            swap(nums[i], nums[k]);
            perform(i + 1, res, nums);
            swap(nums[i], nums[k]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>  res;
        perform(0, res, nums);
        return res;
    }
};