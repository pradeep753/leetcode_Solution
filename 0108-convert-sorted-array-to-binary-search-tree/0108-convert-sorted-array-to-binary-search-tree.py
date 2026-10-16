
class Solution:
    def sortedArrayToBST(self, nums: list[int]) -> TreeNode | None:
        def build(left: int, right: int) -> TreeNode | None:
            if left >= right:
                return None

            mid = (left + right) // 2
            root = TreeNode(nums[mid])

            root.left = build(left, mid)
            root.right = build(mid + 1, right)

            return root

        return build(0, len(nums))
   