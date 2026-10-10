class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        size = len(strs)
        l = ""
        s = min(strs, key=len)
        for i in range(len(s)):
            count = 0
            for j in strs:
                if s[i] == j[i]:
                    count += 1
            if count == size:
                l += s[i]
            else:
                break
        return l
                 