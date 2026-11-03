class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx = 0;
        int count = 0;
        for(int x : nums){
            mx = max(mx, x);
            count += x;
        }
    return mx * (int)nums.size() - count;

    }
};