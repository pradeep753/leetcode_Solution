class Solution:
    def minimumSumSubarray(self, nums: List[int], l: int, r: int) -> int:
        n = len(nums)
        res = float('inf')
        for i in range(n):
            count = 0
            for j in range(i, n):
                count += nums[j]
                length = j - i + 1
                if l <= length <= r and count > 0:
                    res = min(res, count)
        return -1 if res == float('inf') else res