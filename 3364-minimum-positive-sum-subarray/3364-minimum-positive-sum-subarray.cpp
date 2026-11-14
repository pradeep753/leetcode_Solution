class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
     int n = nums.size();
     int res = INT_MAX;
     for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = i; j < n; j++){
            count += nums[j];
            int len = j - i + 1;
            if(len >= l && len <= r && count > 0){
                res = min(res, count);
                }
            }
        }   
        return res == INT_MAX ? -1 : res;
    }
};