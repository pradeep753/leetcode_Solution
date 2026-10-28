class Solution:
    def minCost(self, grid: list[list[int]]) -> int:
        sn = [{0}] + [set() for _ in range(len(grid[0]) - 1)]
        for row in grid:
            for j, v in enumerate(row):
                sn[j] = {x ^ v for x in sn[j] | (sn[j - 1] if j else set())}
        return min(sn[-1])