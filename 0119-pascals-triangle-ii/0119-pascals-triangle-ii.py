class Solution:
    def getRow(self, rowIndex):
        ans = []
        res = 1

        for i in range(rowIndex + 1):
            ans.append(res)
            res = res * (rowIndex - i) // (i + 1)

        return ans