class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size() + s2.size() != s3.size()) return false;
        int n = s1.size();
        int m = s2.size();
        vector<vector<bool>> sn(n + 1, vector<bool>(m + 1, false));
        sn[0][0] = true;
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= m; j++) {
                if(i == 0 and j == 0) continue;
                if(i > 0 and sn[i - 1][j] and s1[i - 1] == s3[i + j - 1])
                    sn[i][j] = true;
                if(j > 0 and sn[i][j - 1] and s2[j - 1] == s3[i + j - 1])
                sn[i][j] = true;
            }
        }
        return sn[n][m];
    }
};