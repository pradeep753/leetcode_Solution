class Solution {
public:
    bool solve(string s1, string s2, string s3, int a1, int a2, vector<vector<int>>&sn) {
     if(a1 + a2 == s3.size()) return 1;
     if(sn[a1][a2] != -1) return sn[a1][a2];
     bool res = 0;
     if(a1<s1.size() && s1[a1] == s3[a1 + a2])
     res = (res | solve(s1,s2,s3,a1 + 1, a2,sn));
     if(a2<s2.size() && s2[a2] == s3[a1 + a2])
     res = (res | solve(s1,s2,s3,a1,a2 + 1, sn));
     return sn[a1][a2] = res;
    }
    bool isInterleave(string s1, string s2, string s3){
        if(s1.size() + s2.size() != s3.size()) return false;
        vector<vector<int>>sn(s1.size() + 1, vector<int>(s2.size() + 1, -1));
        return solve(s1, s2, s3, 0, 0, sn);
    }
};