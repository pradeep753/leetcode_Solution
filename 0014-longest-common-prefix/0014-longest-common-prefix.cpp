class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string s = "";
        int i = 0, len = strs.size();
        while(i < strs[0].length()){
            if(strs[0][i] == strs[len - 1][i])
            s += strs[0][i];
            else break;
            i++;
        }
        return s;
    }
};