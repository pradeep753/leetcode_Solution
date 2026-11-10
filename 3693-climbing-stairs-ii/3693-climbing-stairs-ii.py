class Solution:
    def climbStairs(self, n: int, costs: List[int]) -> int:
        costs = [0] + costs
        x, y, z = costs[n], inf,inf
        for i in reversed(range(n)):
            x, y, z = costs[i] + min(x + 1, y + 4, z + 9), x, y
        return x