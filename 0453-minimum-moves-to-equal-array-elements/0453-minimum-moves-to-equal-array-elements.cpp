class Solution {
public:
    int minMoves(vector<int>& nums) {
        int pr = *min_element(nums.begin(), nums.end());
        long long moves = 0;
        for(int x : nums) moves += x - pr;
        return moves;
    }
};