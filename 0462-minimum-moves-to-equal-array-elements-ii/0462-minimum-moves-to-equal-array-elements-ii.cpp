class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid = nums[nums.size() / 2];
        long long run = 0;
        for(int num : nums){
            run += abs(num - mid);
        }
        return run;
    }
};