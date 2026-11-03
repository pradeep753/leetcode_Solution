class Solution:
    def minMoves(self, nums: List[int]) -> int:
        mx = 0
        count = 0
        for x in nums:
            mx = max(mx, x)
            count += x
        return mx * len(nums) - count