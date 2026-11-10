class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        costs.insert(costs.begin(), 0);
        int  x = costs[n], y = INT_MAX / 2, z = INT_MAX / 2;
        for(int i = n - 1; i >= 0; --i){
            int curr = costs[i] + min({x + 1, y + 4, z + 9});
            z = y, y = x, x = curr;
        }
        return x;
    }
};