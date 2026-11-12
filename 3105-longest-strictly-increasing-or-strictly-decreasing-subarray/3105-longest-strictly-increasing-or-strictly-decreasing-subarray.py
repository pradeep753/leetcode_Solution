class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        n = len(nums)
        maxlen = 1
        up = 1
        down = 1
        for i in range(1, n):
            if nums[i] > nums[i - 1]:
                up += 1
                down = 1
            elif nums[i] < nums[i - 1]:
                down += 1
                up = 1
            else:
                down = 1
                up = 1
            maxlen = max(maxlen, up, down)
        return maxlen  