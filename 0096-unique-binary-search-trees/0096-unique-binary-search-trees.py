class Solution:
    def numTrees(self, n: int) -> int:
        res = 1
        
        for i in range(n):
            res = res * 2 * (2 * i + 1) // (i + 2)

        return res
