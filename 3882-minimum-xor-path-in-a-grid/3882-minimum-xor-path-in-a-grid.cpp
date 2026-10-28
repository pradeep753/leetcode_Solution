class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<bitset<1024>> sn(n);
        sn[0][0] = 1;
        for(auto& row : grid)
            for(int j = 0; j < n; j++){
                auto reach = j ? sn[j] | sn[j - 1] : sn[j];
                sn[j].reset();
                for(int x = 0; x < 1024; x++)
                    if(reach[x]) sn[j][x ^ row[j]] = 1;
            }
        int x = 0;
        while(!sn[n - 1][x]) x++;
        return x;
    }
};