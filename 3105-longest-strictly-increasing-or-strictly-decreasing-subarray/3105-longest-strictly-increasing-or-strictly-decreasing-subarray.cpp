class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 1, up = 1, down = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] > nums[i - 1]) {
                up++;
                down = 1;
            }else if(nums[i] < nums[i - 1]){
                down++;
                up = 1;
            }else{
                down = 1;
                up = 1;
            }
            maxLen = max(maxLen, max(up, down));
        }
        return maxLen;
    }
};