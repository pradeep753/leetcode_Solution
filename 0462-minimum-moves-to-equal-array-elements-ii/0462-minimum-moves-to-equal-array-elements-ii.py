class Solution:
    def minMoves2(self, nums: list[int]) -> int:
        nums.sort()
        mid = nums[len(nums) // 2]
        run = 0
        for num in nums:
            run += abs(num - mid)
        return run