class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        for (int i = 1; i < n; i++) {
            string helper = "";
            int count = 1;
            for (int j = 1; j < ans.size(); j++) {
                if (ans[j] == ans[j - 1]) {
                    count++;
                } else {
                    helper += to_string(count) + ans[j - 1];
                    count = 1;
                }
            }
            helper += to_string(count) + ans.back();
            ans = helper;
        }
        return ans;
    }
};