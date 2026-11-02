class Solution {
public:
    int minMoves2(vector<int>& nums) {
      int n = nums.size(), steps = 0;
      sort(nums.begin(), nums.end());
      int run = nums[n/2];
      for(int i=0; i<n; i++){
        steps += abs(nums[i] - run);
      }
      return steps;
    }
};